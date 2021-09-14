#pragma once

#include "../IconFontCppHeaders/IconsFontAwesome5.h"

#define USE_IMGUI_TABLES
// uncomment and modify defines under for customize ImGuiFileDialog

//#define MAX_FILE_DIALOG_NAME_BUFFER 1024
//#define MAX_PATH_BUFFER_SIZE 1024

//#define USE_EXPLORATION_BY_KEYS
// this mapping by default is for GLFW but you can use another
//#include <GLFW/glfw3.h> 
// Up key for explore to the top
//#define IGFD_KEY_UP GLFW_KEY_UP
// Down key for explore to the bottom
//#define IGFD_KEY_DOWN GLFW_KEY_DOWN
// Enter key for open directory
//#define IGFD_KEY_ENTER GLFW_KEY_ENTER
// BackSpace for comming back to the last directory
//#define IGFD_KEY_BACKSPACE GLFW_KEY_BACKSPACE

// widget
// filter combobox width
#define FILTER_COMBO_WIDTH 240.0f
// button widget use for compose path
//#define IMGUI_PATH_BUTTON ImGui::Button
// standard button
//#define IMGUI_BUTTON ImGui::Button

// locales string
#define createDirButtonString ICON_FA_FOLDER_PLUS
#define okButtonString (std::string(ICON_FA_CHECK_SQUARE) + " OK").c_str()
#define cancelButtonString (std::string(ICON_FA_BACKSPACE) +" Cancel").c_str()
#define resetButtonString ICON_FA_UNDO
#define drivesButtonString ICON_FA_SERVER
#define searchString ICON_FA_SEARCH
#define dirEntryString ICON_FA_FOLDER
#define linkEntryString ICON_FA_LINK
#define fileEntryString ICON_FA_FILE
//#define fileNameString "File Name : "
//#define dirNameString "Directory Path :"
//#define buttonResetSearchString "Reset search"
//#define buttonDriveString "Drives"
//#define buttonResetPathString "Reset to current directory"
//#define buttonCreateDirString "Create Directory"
//#define OverWriteDialogTitleString "The file Already Exist !"
//#define OverWriteDialogMessageString "Would you like to OverWrite it ?"
//#define OverWriteDialogConfirmButtonString "Confirm"
//#define OverWriteDialogCancelButtonString "Cancel"

// DateTimeFormat
// see strftime functionin <ctime> for customize
// "%Y/%m/%d %H:%M" give 2021:01:22 11:47
// "%Y/%m/%d %i:%M%p" give 2021:01:22 11:45PM
//#define DateTimeFormat "%Y/%m/%d %i:%M%p"

// theses icons will appear in table headers
#define USE_CUSTOM_SORTING_ICON
#define tableHeaderAscendingIcon ICON_FA_SORT_ALPHA_UP
#define tableHeaderDescendingIcon ICON_FA_SORT_ALPHA_DOWN
//#define tableHeaderFileNameString " File name"
//#define tableHeaderFileTypeString " Type"
//#define tableHeaderFileSizeString " Size"
//#define tableHeaderFileDateTimeString " Date"

//#define USE_BOOKMARK
//#define bookmarkPaneWith 150.0f
//#define IMGUI_TOGGLE_BUTTON ToggleButton
//#define bookmarksButtonString "Bookmark"
//#define bookmarksButtonHelpString "Bookmark"
//#define addBookmarkButtonString ICON_FA_PLUS_SQUARE
//#define removeBookmarkButtonString ION_FA_MINUS_SQUARE
