#pragma once

constexpr int CONTACT_INFOS_NUM = 5;
constexpr int MAX_CONTACTS = 8;

typedef enum e_contact_infos
{
    FIRST_NAME,
    LAST_NAME,
    NICKNAME,
    PHONE_NUMBER,
    SECRET
} t_contact_infos;

void check_eof(void);
