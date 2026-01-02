// © 2026 C-Web
// Created by Capitaine_steeve78
// Licensed under the Creative Commons BY-NC-SA 4.0
//
// Official repository: https://github.com/Capitaine-steeve78/C-Web

// © 2025-2026 C-Web
// Created by Capitaine_steeve78
// Licensed under the Creative Commons BY-NC-SA 4.0
//
// Official repository: https://github.com/Capitaine-steeve78/C-Web

#ifndef C_WEB_ERROR_H
#define C_WEB_ERROR_H

typedef enum {
    CWEB_SUCCESS = 0,
    CWEB_ERROR_UNKNOWN = 1,
    CWEB_ERROR_NETWORK = 2,
    CWEB_ERROR_TIMEOUT = 3
} CWebError;

const char* cweb_error_to_string(CWebError error);

#endif // C_WEB_ERROR_H