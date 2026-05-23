// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifndef CONFIG_CUSTOM_DEFINES_PRE_HPP
#define CONFIG_CUSTOM_DEFINES_PRE_HPP

/**
 * rAthena configuration file (http://rathena.org)
 * For detailed guidance on these check http://rathena.org/wiki/SRC/config/
 **/
#define PACKETVER 20211103
#define VIP_ENABLE
#define PRERE
#ifndef PACKET_OBFUSCATION
#define PACKET_OBFUSCATION

 // Define these inside src/custom/defines_pre.hpp or src/custom/defines_post.hpp
#define PACKET_OBFUSCATION_KEY1 0x6E2F6233
#define PACKET_OBFUSCATION_KEY2 0x193B0A66
#define PACKET_OBFUSCATION_KEY3 0x0D1D2CA5

/// Comment this to disable warnings for missing client side encryption
#define PACKET_OBFUSCATION_WARN
#endif

#endif /* CONFIG_CUSTOM_DEFINES_PRE_HPP */
