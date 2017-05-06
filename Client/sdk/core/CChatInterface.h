/*****************************************************************************
*
*  PROJECT:     Multi Theft Auto v1.0
*               (Shared logic for modifications)
*  LICENSE:     See LICENSE in the top level directory
*  FILE:        sdk/core/CChatInterface.h
*  PURPOSE:     Chat interface class
*
*****************************************************************************/

#pragma once

namespace Chat {
    namespace ColorType {
        enum eType {
            BG = 0,
            TEXT,
            INPUT_BG,
            INPUT_TEXT,
            MAX
        };
    }

    namespace Font {
        enum eFont {
            DEFAULT,
            CLEAR,
            BOLD,
            ARIAL,
            MAX
        };
    }

    namespace Position {
        namespace Horizontal {
            enum : int {
                LEFT = 0,
                CENTER = 1,
                RIGHT = 2
            };
        }

        namespace Vertical {
            enum : int {
                TOP = 0,
                CENTER = 1,
                BOTTOM = 2
            };
        }
    }
}

typedef Chat::Font::eFont eChatFont;
typedef Chat::ColorType::eType eChatColorType;
