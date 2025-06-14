#include <linux/input-event-codes.h>
#include <map>

namespace inputtino::keyboard {

struct KEY_MAP {
  int linux_code;
  int scan_code;
};

constexpr auto UNKNOWN = 0;

/**
 * A map of [Moonlight keyboard code] -> {linux_code, scan_code}
 */
static const std::map<short, KEY_MAP> key_mappings = {
    {0x08, {KEY_BACKSPACE, 0x7002A}},  {0x09, {KEY_TAB, 0x7002B}},
    {0x0C, {KEY_CLEAR, UNKNOWN}},      {0x0D, {KEY_ENTER, 0x70028}},
    {0x10, {KEY_LEFTSHIFT, 0x700E1}},  {0x11, {KEY_LEFTCTRL, 0x700E0}},
    {0x12, {KEY_LEFTALT, UNKNOWN}},    {0x13, {KEY_PAUSE, UNKNOWN}},
    {0x14, {KEY_CAPSLOCK, 0x70039}},   {0x15, {KEY_KATAKANAHIRAGANA, UNKNOWN}},
    {0x16, {KEY_HANGEUL, UNKNOWN}},    {0x17, {KEY_HANJA, UNKNOWN}},
    {0x19, {KEY_KATAKANA, UNKNOWN}},   {0x1B, {KEY_ESC, 0x70029}},
    {0x20, {KEY_SPACE, 0x7002C}},      {0x21, {KEY_PAGEUP, 0x7004B}},
    {0x22, {KEY_PAGEDOWN, 0x7004E}},   {0x23, {KEY_END, 0x7004D}},
    {0x24, {KEY_HOME, 0x7004A}},       {0x25, {KEY_LEFT, 0x70050}},
    {0x26, {KEY_UP, 0x70052}},         {0x27, {KEY_RIGHT, 0x7004F}},
    {0x28, {KEY_DOWN, 0x70051}},       {0x29, {KEY_SELECT, UNKNOWN}},
    {0x2A, {KEY_PRINT, UNKNOWN}},      {0x2C, {KEY_SYSRQ, 0x70046}},
    {0x2D, {KEY_INSERT, 0x70049}},     {0x2E, {KEY_DELETE, 0x7004C}},
    {0x2F, {KEY_HELP, UNKNOWN}},       {0x30, {KEY_0, 0x70027}},
    {0x31, {KEY_1, 0x7001E}},          {0x32, {KEY_2, 0x7001F}},
    {0x33, {KEY_3, 0x70020}},          {0x34, {KEY_4, 0x70021}},
    {0x35, {KEY_5, 0x70022}},          {0x36, {KEY_6, 0x70023}},
    {0x37, {KEY_7, 0x70024}},          {0x38, {KEY_8, 0x70025}},
    {0x39, {KEY_9, 0x70026}},          {0x41, {KEY_A, 0x70004}},
    {0x42, {KEY_B, 0x70005}},          {0x43, {KEY_C, 0x70006}},
    {0x44, {KEY_D, 0x70007}},          {0x45, {KEY_E, 0x70008}},
    {0x46, {KEY_F, 0x70009}},          {0x47, {KEY_G, 0x7000A}},
    {0x48, {KEY_H, 0x7000B}},          {0x49, {KEY_I, 0x7000C}},
    {0x4A, {KEY_J, 0x7000D}},          {0x4B, {KEY_K, 0x7000E}},
    {0x4C, {KEY_L, 0x7000F}},          {0x4D, {KEY_M, 0x70010}},
    {0x4E, {KEY_N, 0x70011}},          {0x4F, {KEY_O, 0x70012}},
    {0x50, {KEY_P, 0x70013}},          {0x51, {KEY_Q, 0x70014}},
    {0x52, {KEY_R, 0x70015}},          {0x53, {KEY_S, 0x70016}},
    {0x54, {KEY_T, 0x70017}},          {0x55, {KEY_U, 0x70018}},
    {0x56, {KEY_V, 0x70019}},          {0x57, {KEY_W, 0x7001A}},
    {0x58, {KEY_X, 0x7001B}},          {0x59, {KEY_Y, 0x7001C}},
    {0x5A, {KEY_Z, 0x7001D}},          {0x5B, {KEY_LEFTMETA, 0x700E3}},
    {0x5C, {KEY_RIGHTMETA, 0x700E7}},  {0x5D, {KEY_COMPOSE, UNKNOWN}},
    {0x5F, {KEY_SLEEP, UNKNOWN}},
    {0x60, {KEY_KP0, 0x70062}},        {0x61, {KEY_KP1, 0x70059}},
    {0x62, {KEY_KP2, 0x7005A}},        {0x63, {KEY_KP3, 0x7005B}},
    {0x64, {KEY_KP4, 0x7005C}},        {0x65, {KEY_KP5, 0x7005D}},
    {0x66, {KEY_KP6, 0x7005E}},        {0x67, {KEY_KP7, 0x7005F}},
    {0x68, {KEY_KP8, 0x70060}},        {0x69, {KEY_KP9, 0x70061}},
    {0x6A, {KEY_KPASTERISK, 0x70055}}, {0x6B, {KEY_KPPLUS, 0x70057}},
    {0x6C, {KEY_KPCOMMA, UNKNOWN}},    {0x6D, {KEY_KPMINUS, 0x70056}},
    {0x6E, {KEY_KPDOT, 0x70063}},      {0x6F, {KEY_KPSLASH, 0x70054}},
    {0x70, {KEY_F1, 0x70059}},         {0x71, {KEY_F2, 0x70060}},
    {0x72, {KEY_F3, 0x70061}},         {0x73, {KEY_F4, 0x70062}},
    {0x74, {KEY_F5, 0x70063}},         {0x75, {KEY_F6, 0x70064}},
    {0x76, {KEY_F7, 0x70065}},         {0x77, {KEY_F8, 0x70066}},
    {0x78, {KEY_F9, 0x70067}},         {0x79, {KEY_F10, 0x70068}},
    {0x7A, {KEY_F11, 70044}},          {0x7B, {KEY_F12, 70045}},
    {0x90, {KEY_NUMLOCK, 0x70053}},    {0x91, {KEY_SCROLLLOCK, 0x70047}},
    {0xA0, {KEY_LEFTSHIFT, 0x700E1}},  {0xA1, {KEY_RIGHTSHIFT, 0x700E5}},
    {0xA2, {KEY_LEFTCTRL, 0x700E0}},   {0xA3, {KEY_RIGHTCTRL, 0x700E4}},
    {0xA4, {KEY_LEFTALT, 0x7002E}},    {0xA5, {KEY_RIGHTALT, 0x700E6}},
    {0xBA, {KEY_SEMICOLON, 0x70033}},  {0xBB, {KEY_EQUAL, 0x7002E}},
    {0xBC, {KEY_COMMA, 0x70036}},      {0xBD, {KEY_MINUS, 0x7002D}},
    {0xBE, {KEY_DOT, 0x70037}},        {0xBF, {KEY_SLASH, 0x70038}},
    {0xC0, {KEY_GRAVE, 0x70035}},      {0xDB, {KEY_LEFTBRACE, 0x7002F}},
    {0xDC, {KEY_BACKSLASH, 0x70031}},  {0xDD, {KEY_RIGHTBRACE, 0x70030}},
    {0xDE, {KEY_APOSTROPHE, 0x70034}}, {0xE2, {KEY_102ND, 0x70064}},
};

} // namespace wolf::core::input::keyboard