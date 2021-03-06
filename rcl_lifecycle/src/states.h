// Copyright 2015 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef STATES_H_
#define STATES_H_

#include "rcl_lifecycle/data_types.h"
#include "rcl_lifecycle/visibility_control.h"

#if __cplusplus
extern "C"
{
#endif

// primary states based on
// design.ros2.org/articles/node_lifecycle.html
extern rcl_lifecycle_state_t rcl_state_unknown;
extern rcl_lifecycle_state_t rcl_state_unconfigured;
extern rcl_lifecycle_state_t rcl_state_inactive;
extern rcl_lifecycle_state_t rcl_state_active;
extern rcl_lifecycle_state_t rcl_state_finalized;

extern rcl_lifecycle_state_t rcl_state_configuring;
extern rcl_lifecycle_state_t rcl_state_cleaningup;
extern rcl_lifecycle_state_t rcl_state_shuttingdown;
extern rcl_lifecycle_state_t rcl_state_activating;
extern rcl_lifecycle_state_t rcl_state_deactivating;
extern rcl_lifecycle_state_t rcl_state_errorprocessing;

extern const rcl_lifecycle_transition_t rcl_transition_configure;
extern const rcl_lifecycle_transition_t rcl_transition_cleanup;
extern const rcl_lifecycle_transition_t rcl_transition_shutdown;
extern const rcl_lifecycle_transition_t rcl_transition_activate;
extern const rcl_lifecycle_transition_t rcl_transition_deactivate;

#if __cplusplus
}
#endif  // extern "C"

#endif  // STATES_H_
