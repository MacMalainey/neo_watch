//     Copyright (C) 2019  Mackenzie Malainey, Lora Ma

//     This program is free software: you can redistribute it and/or modify
//     it under the terms of the GNU General Public License as published by
//     the Free Software Foundation, either version 3 of the License, or
//     (at your option) any later version.

//     This program is distributed in the hope that it will be useful,
//     but WITHOUT ANY WARRANTY; without even the implied warranty of
//     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//     GNU General Public License for more details.

//     You should have received a copy of the GNU General Public License
//     along with this program.  If not, see <https://www.gnu.org/licenses/>.

/* INCLUDES */

/* DEFINES */

/* CONSTANTS */

/* VARIABLES */

/* PROCEDURES */

/* FUNCTION DEFINITIONS */

#include <stdbool.h>
#include "prj_types.h"

#include "nrfx_gpiote.h"
#include "nrf_gpiote.h"

#include "app_simple_timer.h"

#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

static void nrf_init(void);

int main(void)
{
    nrf_init();

}

static void nrf_init()
{
    // Enable Logging
    NRF_LOG_INIT(NULL);
    NRF_LOG_DEFAULT_BACKENDS_INIT();

    NRF_LOG_INFO("INITIALIZING SDK");

    nrfx_gpiote_init();

    NRF_LOG_PROCESS();
}
