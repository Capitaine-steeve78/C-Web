// © 2026 C-Web
// Created by Capitaine_steeve78
// Licensed under the Creative Commons BY-NC-SA 4.0
//
// Official repository: https://github.com/Capitaine-steeve78/C-Web

#include "../../include/core/error.h"

const char* cweb_error_to_string(CWebError error)
{
    switch (error) {
        case CWEB_SUCCESS:      return "SUCCESS";
        case CWEB_ERROR_UNKNOWN: return "UNKNOWN ERROR";
        case CWEB_ERROR_NETWORK: return "NETWORK ERROR";
        case CWEB_ERROR_TIMEOUT: return "TIMEOUT";
        default:                return "INVALID ERROR CODE";
    }
}