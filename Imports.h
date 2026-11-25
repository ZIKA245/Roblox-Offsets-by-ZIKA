/*  Dumped By       : ZIKA
/*  Dumped With     : ZIKA Dumper
/*  Roblox Version  : version-2c6fd5e09aaf4cfa
/*  Dumper Version  : 4.0.0
/*  Dumped At       : 17:37:33 2026-11-24
/*  Resolved Imports: 405
*/

#pragma once

#include <cstdint>
#include <string>

// IAT Region: 0x6438000 .. 0x6439d58
// Lazy Sentinels Remaining: 543

namespace CRYPT32_dll {
    inline constexpr uintptr_t CryptUnprotectData = 0x6438210;
    inline constexpr uintptr_t CryptProtectData = 0x6438220;
}

namespace CRYPTSP_dll {
    inline constexpr uintptr_t CryptGenRandom = 0x6438060;
    inline constexpr uintptr_t CryptReleaseContext = 0x6438130;
    inline constexpr uintptr_t CryptCreateHash = 0x6438138;
    inline constexpr uintptr_t CryptHashData = 0x6438140;
    inline constexpr uintptr_t CryptDestroyHash = 0x6438150;
    inline constexpr uintptr_t CryptGetHashParam = 0x6438168;
}

namespace GDI32_dll {
    inline constexpr uintptr_t CreateDCA = 0x64382a0;
    inline constexpr uintptr_t CreateBitmap = 0x64382b0;
    inline constexpr uintptr_t CreateDIBSection = 0x64382d8;
    inline constexpr uintptr_t DeleteObject = 0x6438300;
    inline constexpr uintptr_t DeleteDC = 0x6438308;
    inline constexpr uintptr_t GetDeviceCaps = 0x6438310;
}

namespace IMM32_DLL {
    inline constexpr uintptr_t ImmGetContext = 0x6438388;
    inline constexpr uintptr_t ImmGetDefaultIMEWnd = 0x6438398;
    inline constexpr uintptr_t ImmSetOpenStatus = 0x64383a0;
}

namespace IPHLPAPI_DLL {
    inline constexpr uintptr_t GetAdaptersAddresses = 0x64383b8;
    inline constexpr uintptr_t IcmpParseReplies = 0x64383c0;
    inline constexpr uintptr_t IcmpSendEcho2 = 0x64383c8;
    inline constexpr uintptr_t IcmpCreateFile = 0x64383d0;
    inline constexpr uintptr_t IcmpCloseHandle = 0x64383d8;
    inline constexpr uintptr_t GetBestInterface = 0x64383e0;
}

namespace KERNEL32_DLL {
    inline constexpr uintptr_t CreateProcessW = 0x6438418;
    inline constexpr uintptr_t CreateThread = 0x6438488;
    inline constexpr uintptr_t FindResourceExA = 0x6438498;
    inline constexpr uintptr_t GetTickCount64 = 0x64384b0;
    inline constexpr uintptr_t DeviceIoControl = 0x64384e0;
    inline constexpr uintptr_t TlsGetValue = 0x6438598;
    inline constexpr uintptr_t CreateSemaphoreA = 0x64385c0;
    inline constexpr uintptr_t GetCurrentThread = 0x64386b0;
    inline constexpr uintptr_t Process32First = 0x6438768;
    inline constexpr uintptr_t CreateToolhelp32Snapshot = 0x6438788;
    inline constexpr uintptr_t Process32Next = 0x64387a0;
    inline constexpr uintptr_t GetSystemPowerStatus = 0x6438890;
    inline constexpr uintptr_t VerifyVersionInfoW = 0x6438908;
    inline constexpr uintptr_t Process32FirstW = 0x6438978;
    inline constexpr uintptr_t Process32NextW = 0x6438980;
    inline constexpr uintptr_t CreateThreadpool = 0x64389a8;
    inline constexpr uintptr_t SetThreadpoolThreadMinimum = 0x64389b8;
    inline constexpr uintptr_t CreateThreadpoolCleanupGroup = 0x64389c0;
    inline constexpr uintptr_t CreateThreadpoolWork = 0x64389c8;
    inline constexpr uintptr_t FlsGetValue = 0x6438ab0;
    inline constexpr uintptr_t FreeLibraryAndExitThread = 0x6438b20;
    inline constexpr uintptr_t CreateFileMappingA = 0x6438b90;
    inline constexpr uintptr_t GetGeoInfoA = 0x6438bc8;
    inline constexpr uintptr_t GetProcessHeap = 0x6438c10;
    inline constexpr uintptr_t GetCurrentProcessId = 0x6438c18;
    inline constexpr uintptr_t GetCurrentThreadId = 0x6438ca0;
    inline constexpr uintptr_t GetUserGeoID = 0x6438d40;
    inline constexpr uintptr_t GetProcAddress = 0x6438d68;
    inline constexpr uintptr_t GetLastError = 0x6438da8;
    inline constexpr uintptr_t GetCurrentProcess = 0x6438de0;
    inline constexpr uintptr_t timeGetTime = 0x6439798;
    inline constexpr uintptr_t timeBeginPeriod = 0x64397d0;
    inline constexpr uintptr_t timeGetDevCaps = 0x64397e8;
}

namespace KERNELBASE_dll {
    inline constexpr uintptr_t RegOpenKeyExA = 0x6438020;
    inline constexpr uintptr_t RegSetValueExA = 0x6438028;
    inline constexpr uintptr_t RegCreateKeyExA = 0x6438030;
    inline constexpr uintptr_t RegCloseKey = 0x6438048;
    inline constexpr uintptr_t RegQueryValueExA = 0x6438050;
    inline constexpr uintptr_t RegOpenKeyExW = 0x6438088;
    inline constexpr uintptr_t RegSetValueExW = 0x6438090;
    inline constexpr uintptr_t RegGetValueW = 0x6438098;
    inline constexpr uintptr_t RegQueryValueExW = 0x64380b0;
    inline constexpr uintptr_t GetTokenInformation = 0x64380c0;
    inline constexpr uintptr_t OpenProcessToken = 0x6438198;
    inline constexpr uintptr_t MapViewOfFile = 0x64383f0;
    inline constexpr uintptr_t CreateMutexW = 0x6438408;
    inline constexpr uintptr_t CreateFileMappingW = 0x6438410;
    inline constexpr uintptr_t LocalAlloc = 0x6438440;
    inline constexpr uintptr_t LocalFree = 0x6438448;
    inline constexpr uintptr_t GetEnvironmentVariableW = 0x6438470;
    inline constexpr uintptr_t GetFileAttributesW = 0x6438478;
    inline constexpr uintptr_t LoadLibraryW = 0x6438480;
    inline constexpr uintptr_t CreateFileW = 0x64384a8;
    inline constexpr uintptr_t CreateDirectoryW = 0x64384c0;
    inline constexpr uintptr_t FindFirstFileW = 0x64384c8;
    inline constexpr uintptr_t GetFullPathNameW = 0x64384d0;
    inline constexpr uintptr_t FindNextFileW = 0x64384d8;
    inline constexpr uintptr_t RemoveDirectoryW = 0x64384e8;
    inline constexpr uintptr_t SetEndOfFile = 0x64384f8;
    inline constexpr uintptr_t GetTempPathW = 0x6438500;
    inline constexpr uintptr_t FindClose = 0x6438508;
    inline constexpr uintptr_t GetFileAttributesExW = 0x6438520;
    inline constexpr uintptr_t DeleteFileW = 0x6438528;
    inline constexpr uintptr_t GetCurrentDirectoryW = 0x6438530;
    inline constexpr uintptr_t SetFilePointerEx = 0x6438538;
    inline constexpr uintptr_t MoveFileExW = 0x6438540;
    inline constexpr uintptr_t GetFileTime = 0x6438550;
    inline constexpr uintptr_t WaitForMultipleObjectsEx = 0x6438560;
    inline constexpr uintptr_t TlsSetValue = 0x6438568;
    inline constexpr uintptr_t ResumeThread = 0x6438570;
    inline constexpr uintptr_t TlsAlloc = 0x6438580;
    inline constexpr uintptr_t SystemTimeToFileTime = 0x6438590;
    inline constexpr uintptr_t AreFileApisANSI = 0x64385a8;
    inline constexpr uintptr_t GetNativeSystemInfo = 0x64385b0;
    inline constexpr uintptr_t SetThreadPriority = 0x64385b8;
    inline constexpr uintptr_t GetFileType = 0x6438600;
    inline constexpr uintptr_t SetErrorMode = 0x6438620;
    inline constexpr uintptr_t SwitchToThread = 0x6438658;
    inline constexpr uintptr_t ReadFile = 0x6438660;
    inline constexpr uintptr_t SetNamedPipeHandleState = 0x6438668;
    inline constexpr uintptr_t CreateNamedPipeW = 0x6438670;
    inline constexpr uintptr_t DuplicateHandle = 0x6438688;
    inline constexpr uintptr_t FlushFileBuffers = 0x64386c8;
    inline constexpr uintptr_t OpenProcess = 0x64386d8;
    inline constexpr uintptr_t LCMapStringW = 0x64386e8;
    inline constexpr uintptr_t SetConsoleCtrlHandler = 0x64386f8;
    inline constexpr uintptr_t FreeEnvironmentStringsA = 0x6438780;
    inline constexpr uintptr_t GetProcessMemoryInfo = 0x6438790;
    inline constexpr uintptr_t FileTimeToSystemTime = 0x6438798;
    inline constexpr uintptr_t GlobalMemoryStatusEx = 0x64387b0;
    inline constexpr uintptr_t GetEnvironmentStringsW = 0x64387b8;
    inline constexpr uintptr_t GetFileSizeEx = 0x64387e8;
    inline constexpr uintptr_t GetStartupInfoW = 0x6438800;
    inline constexpr uintptr_t UnlockFileEx = 0x6438818;
    inline constexpr uintptr_t GetOverlappedResult = 0x6438838;
    inline constexpr uintptr_t LockFileEx = 0x6438850;
    inline constexpr uintptr_t GetDriveTypeW = 0x6438858;
    inline constexpr uintptr_t LoadLibraryExW = 0x6438860;
    inline constexpr uintptr_t SetFilePointer = 0x6438878;
    inline constexpr uintptr_t GetVersionExA = 0x6438888;
    inline constexpr uintptr_t QueryFullProcessImageNameW = 0x6438898;
    inline constexpr uintptr_t GetProcessImageFileNameA = 0x64388a0;
    inline constexpr uintptr_t CreateEventW = 0x64388b0;
    inline constexpr uintptr_t SleepEx = 0x64388f8;
    inline constexpr uintptr_t FormatMessageA = 0x6438918;
    inline constexpr uintptr_t GetSystemTime = 0x6438958;
    inline constexpr uintptr_t GetLocaleInfoW = 0x6438968;
    inline constexpr uintptr_t GetExitCodeThread = 0x6438a10;
    inline constexpr uintptr_t GetVersion = 0x6438a18;
    inline constexpr uintptr_t TransactNamedPipe = 0x6438a28;
    inline constexpr uintptr_t FindFirstFileExW = 0x6438a30;
    inline constexpr uintptr_t GetSystemFirmwareTable = 0x6438a38;
    inline constexpr uintptr_t GetDiskFreeSpaceExW = 0x6438a68;
    inline constexpr uintptr_t GetStringTypeW = 0x6438a78;
    inline constexpr uintptr_t InitOnceComplete = 0x6438a88;
    inline constexpr uintptr_t InitOnceBeginInitialize = 0x6438a90;
    inline constexpr uintptr_t GetLocaleInfoEx = 0x6438aa0;
    inline constexpr uintptr_t FlsAlloc = 0x6438aa8;
    inline constexpr uintptr_t FlsSetValue = 0x6438ab8;
    inline constexpr uintptr_t GetCPInfo = 0x6438ae8;
    inline constexpr uintptr_t InitializeCriticalSectionAndSpinCount = 0x6438b00;
    inline constexpr uintptr_t GetCommandLineA = 0x6438b08;
    inline constexpr uintptr_t GetCommandLineW = 0x6438b10;
    inline constexpr uintptr_t GetTimeZoneInformation = 0x6438b40;
    inline constexpr uintptr_t IsValidCodePage = 0x6438b78;
    inline constexpr uintptr_t GetACP = 0x6438b80;
    inline constexpr uintptr_t UnmapViewOfFile = 0x6438ba0;
    inline constexpr uintptr_t CreateMutexA = 0x6438bb0;
    inline constexpr uintptr_t WaitForMultipleObjects = 0x6438bb8;
    inline constexpr uintptr_t lstrcmpW = 0x6438be0;
    inline constexpr uintptr_t GetSystemTimeAsFileTime = 0x6438bf0;
    inline constexpr uintptr_t WideCharToMultiByte = 0x6438c00;
    inline constexpr uintptr_t GetModuleHandleW = 0x6438c08;
    inline constexpr uintptr_t LoadResource = 0x6438c48;
    inline constexpr uintptr_t RaiseException = 0x6438c58;
    inline constexpr uintptr_t WaitForSingleObjectEx = 0x6438c68;
    inline constexpr uintptr_t SetEvent = 0x6438c70;
    inline constexpr uintptr_t FormatMessageW = 0x6438c80;
    inline constexpr uintptr_t MultiByteToWideChar = 0x6438c88;
    inline constexpr uintptr_t GetModuleHandleA = 0x6438c90;
    inline constexpr uintptr_t ReleaseMutex = 0x6438c98;
    inline constexpr uintptr_t WaitForSingleObject = 0x6438ca8;
    inline constexpr uintptr_t InitializeCriticalSectionEx = 0x6438cb8;
    inline constexpr uintptr_t GetModuleFileNameW = 0x6438cd0;
    inline constexpr uintptr_t LoadLibraryExA = 0x6438cd8;
    inline constexpr uintptr_t GetModuleHandleExW = 0x6438ce0;
    inline constexpr uintptr_t ReleaseSemaphore = 0x6438ce8;
    inline constexpr uintptr_t GetModuleFileNameA = 0x6438d20;
    inline constexpr uintptr_t GetProcessTimes = 0x6438d28;
    inline constexpr uintptr_t SetCurrentDirectoryW = 0x6438d38;
    inline constexpr uintptr_t VirtualQuery = 0x6438d50;
    inline constexpr uintptr_t FreeLibrary = 0x6438d60;
    inline constexpr uintptr_t GetSystemInfo = 0x6438d78;
    inline constexpr uintptr_t CloseHandle = 0x6438d80;
    inline constexpr uintptr_t LoadLibraryA = 0x6438d90;
    inline constexpr uintptr_t Sleep = 0x6438db0;
    inline constexpr uintptr_t GetEnvironmentVariableA = 0x6438db8;
    inline constexpr uintptr_t VirtualAlloc = 0x6438dc0;
    inline constexpr uintptr_t WriteFile = 0x6438dc8;
    inline constexpr uintptr_t GetStdHandle = 0x6438dd8;
    inline constexpr uintptr_t VirtualFree = 0x6438de8;
    inline constexpr uintptr_t VirtualProtect = 0x6438df8;
    inline constexpr uintptr_t CreateEventA = 0x6438e58;
    inline constexpr uintptr_t ResetEvent = 0x6438e68;
    inline constexpr uintptr_t PathFindFileNameW = 0x6439158;
    inline constexpr uintptr_t PathFindFileNameA = 0x6439160;
    inline constexpr uintptr_t WaitForMultipleObjectsEx_2 = 0x6439800;
    inline constexpr uintptr_t GetLastError = 0x64398c8;
    inline constexpr uintptr_t ResetEvent_2 = 0x6439960;
    inline constexpr uintptr_t SetEvent_2 = 0x6439970;
    inline constexpr uintptr_t WaitOnAddress = 0x6439a30;
}

namespace RobloxPlayerBeta_dll {
    inline constexpr uintptr_t sub_0xd17810 = 0x64389f8;
    inline constexpr uintptr_t sub_0xce3990 = 0x6439d40;
    inline constexpr uintptr_t sub_0xce3780 = 0x6439d48;
    inline constexpr uintptr_t sub_0xce3780_2 = 0x6439d50;
}

namespace SHELL32_dll {
    inline constexpr uintptr_t Shell_NotifyIconW = 0x6439100;
    inline constexpr uintptr_t sub_0x23ba4e = 0x6439128;
}

namespace USER32_dll {
    inline constexpr uintptr_t IsWindow = 0x6439190;
    inline constexpr uintptr_t SetWindowTextW = 0x64391b0;
    inline constexpr uintptr_t GetWindowLongA = 0x64391d8;
    inline constexpr uintptr_t MonitorFromWindow = 0x64391e8;
    inline constexpr uintptr_t GetMonitorInfoA = 0x6439230;
    inline constexpr uintptr_t IsIconic = 0x6439260;
    inline constexpr uintptr_t RegisterClassW = 0x6439278;
    inline constexpr uintptr_t GetCursorPos = 0x6439280;
    inline constexpr uintptr_t SetWindowLongPtrW = 0x64392b8;
    inline constexpr uintptr_t sub_0xc480 = 0x64392c0;
    inline constexpr uintptr_t CreateWindowExA = 0x64392c8;
    inline constexpr uintptr_t RegisterPowerSettingNotification = 0x6439348;
    inline constexpr uintptr_t RegisterClassExA = 0x6439380;
    inline constexpr uintptr_t GetKeyboardLayout = 0x64393c0;
    inline constexpr uintptr_t LoadKeyboardLayoutA = 0x64393c8;
    inline constexpr uintptr_t MapVirtualKeyA = 0x6439410;
    inline constexpr uintptr_t ToUnicode = 0x6439420;
    inline constexpr uintptr_t SetRect = 0x6439438;
    inline constexpr uintptr_t PtInRect = 0x6439448;
    inline constexpr uintptr_t DestroyCursor = 0x6439468;
    inline constexpr uintptr_t CreateIconIndirect = 0x6439498;
    inline constexpr uintptr_t GetClassLongPtrA = 0x64394a0;
    inline constexpr uintptr_t SetClassLongPtrA = 0x64394a8;
    inline constexpr uintptr_t EnumDisplayDevicesA = 0x64394b0;
    inline constexpr uintptr_t EnumDisplaySettingsA = 0x64394b8;
    inline constexpr uintptr_t UpdateWindow = 0x64394d0;
    inline constexpr uintptr_t MapVirtualKeyW = 0x64394f0;
    inline constexpr uintptr_t SetWindowLongPtrA = 0x6439500;
    inline constexpr uintptr_t RegisterClipboardFormatW = 0x6439518;
    inline constexpr uintptr_t GetRawInputBuffer = 0x6439520;
    inline constexpr uintptr_t MapVirtualKeyExA = 0x6439528;
    inline constexpr uintptr_t EnumDisplaySettingsExA = 0x6439530;
    inline constexpr uintptr_t ClientToScreen = 0x6439550;
    inline constexpr uintptr_t CallWindowProcA = 0x6439558;
    inline constexpr uintptr_t GetMessageW = 0x6439560;
    inline constexpr uintptr_t SystemParametersInfoA = 0x6439568;
    inline constexpr uintptr_t sub_0x17860 = 0x6439578;
    inline constexpr uintptr_t PostMessageW = 0x6439588;
    inline constexpr uintptr_t LoadCursorA = 0x6439590;
    inline constexpr uintptr_t CreateWindowExW = 0x64395a0;
    inline constexpr uintptr_t ScreenToClient = 0x64395c0;
    inline constexpr uintptr_t GetWindowThreadProcessId = 0x64395d0;
    inline constexpr uintptr_t GetSystemMetrics = 0x64395d8;
    inline constexpr uintptr_t RegisterClassExW = 0x64395e0;
    inline constexpr uintptr_t GetClassInfoExW = 0x64395e8;
    inline constexpr uintptr_t LoadCursorW = 0x64395f0;
    inline constexpr uintptr_t CallWindowProcW = 0x64395f8;
    inline constexpr uintptr_t LoadStringW = 0x6439668;
    inline constexpr uintptr_t RegisterDeviceNotificationW = 0x6439678;
    inline constexpr uintptr_t DispatchMessageW = 0x6439680;
    inline constexpr uintptr_t PeekMessageW = 0x6439690;
    inline constexpr uintptr_t GetWindowLongPtrA = 0x64396a0;
    inline constexpr uintptr_t GetClientRect = 0x64396c8;
    inline constexpr uintptr_t GetForegroundWindow = 0x64396d8;
    inline constexpr uintptr_t LoadIconW = 0x64396e0;
    inline constexpr uintptr_t TranslateMessage = 0x64396e8;
}

namespace WINMM_dll {
    inline constexpr uintptr_t timeSetEvent = 0x64397e0;
}

namespace WS2_32_dll {
    inline constexpr uintptr_t inet_pton = 0x6439808;
    inline constexpr uintptr_t htonl = 0x6439810;
    inline constexpr uintptr_t htons = 0x6439818;
    inline constexpr uintptr_t htons_2 = 0x6439820;
    inline constexpr uintptr_t getaddrinfo = 0x6439828;
    inline constexpr uintptr_t FreeAddrInfoW = 0x6439830;
    inline constexpr uintptr_t inet_ntop = 0x6439838;
    inline constexpr uintptr_t htonl_2 = 0x6439840;
    inline constexpr uintptr_t WSAStartup = 0x6439848;
    inline constexpr uintptr_t WSACleanup = 0x6439850;
    inline constexpr uintptr_t closesocket = 0x6439858;
    inline constexpr uintptr_t setsockopt = 0x6439860;
    inline constexpr uintptr_t getsockopt = 0x6439868;
    inline constexpr uintptr_t ioctlsocket = 0x6439870;
    inline constexpr uintptr_t socket = 0x6439878;
    inline constexpr uintptr_t connect = 0x6439880;
    inline constexpr uintptr_t recv = 0x6439890;
    inline constexpr uintptr_t send = 0x6439898;
    inline constexpr uintptr_t getsockname = 0x64398a0;
    inline constexpr uintptr_t bind = 0x64398a8;
    inline constexpr uintptr_t listen = 0x64398b0;
    inline constexpr uintptr_t accept = 0x64398b8;
    inline constexpr uintptr_t WSARecvFrom = 0x64398c0;
    inline constexpr uintptr_t WSASendMsg = 0x64398d0;
    inline constexpr uintptr_t sendto = 0x64398d8;
    inline constexpr uintptr_t select = 0x64398e0;
    inline constexpr uintptr_t WSAIoctl = 0x6439918;
    inline constexpr uintptr_t __WSAFDIsSet = 0x6439930;
    inline constexpr uintptr_t recvfrom = 0x6439938;
    inline constexpr uintptr_t gethostname = 0x6439940;
    inline constexpr uintptr_t getnameinfo = 0x6439948;
    inline constexpr uintptr_t WSAEnumNetworkEvents = 0x6439950;
    inline constexpr uintptr_t WSAEventSelect = 0x6439968;
    inline constexpr uintptr_t WSACreateEvent = 0x6439978;
}

namespace WebView2Loader_dll {
    inline constexpr uintptr_t GetAvailableCoreWebView2BrowserVersionString = 0x64399e0;
    inline constexpr uintptr_t CompareBrowserVersions = 0x64399e8;
}

namespace advapi32_dll {
    inline constexpr uintptr_t sub_0x40696 = 0x6438160;
    inline constexpr uintptr_t BuildSecurityDescriptorW = 0x6438170;
    inline constexpr uintptr_t BuildExplicitAccessWithNameA = 0x6438178;
    inline constexpr uintptr_t ConvertStringSecurityDescriptorToSecurityDescriptorW = 0x6438180;
}

namespace combase_dll {
    inline constexpr uintptr_t RoInitialize = 0x6439a48;
    inline constexpr uintptr_t StringFromGUID2 = 0x6439cb0;
    inline constexpr uintptr_t CoCreateInstance = 0x6439cc0;
    inline constexpr uintptr_t CoUninitialize = 0x6439ce0;
    inline constexpr uintptr_t CoInitializeEx = 0x6439ce8;
    inline constexpr uintptr_t CoTaskMemFree = 0x6439cf8;
    inline constexpr uintptr_t CoTaskMemAlloc = 0x6439d00;
    inline constexpr uintptr_t PropVariantClear = 0x6439d10;
    inline constexpr uintptr_t CoCreateGuid = 0x6439d18;
}

namespace cryptbase_dll {
    inline constexpr uintptr_t SystemFunction036 = 0x64380b8;
}

namespace dwmapi_dll {
    inline constexpr uintptr_t DwmSetWindowAttribute = 0x6439ac8;
}

namespace libHttpClient_GDK_dll {
    inline constexpr uintptr_t HCWebSocketDisconnect = 0x916f000; // [DelayImport]
    inline constexpr uintptr_t HCTraceImplMessage = 0x916f008; // [DelayImport]
    inline constexpr uintptr_t HCSettingsGetTraceLevel = 0x916f010; // [DelayImport]
    inline constexpr uintptr_t HCTraceSetEtwEnabled = 0x916f018; // [DelayImport]
    inline constexpr uintptr_t HCInitialize = 0x916f020; // [DelayImport]
    inline constexpr uintptr_t HCCleanupAsync = 0x916f028; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallCreate = 0x916f030; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallPerformAsync = 0x916f038; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallDuplicateHandle = 0x916f040; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallCloseHandle = 0x916f048; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallSetTracing = 0x916f050; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallGetRequestUrl = 0x916f058; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestSetUrl = 0x916f060; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestSetRequestBodyBytes = 0x916f068; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestSetRequestBodyString = 0x916f070; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestSetHeader = 0x916f078; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestSetRetryAllowed = 0x916f080; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestSetRetryCacheId = 0x916f088; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestSetTimeout = 0x916f090; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestSetRetryDelay = 0x916f098; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestSetTimeoutWindow = 0x916f0a0; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallResponseGetResponseString = 0x916f0a8; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallResponseGetResponseBodyBytesSize = 0x916f0b0; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallResponseGetResponseBodyBytes = 0x916f0b8; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallResponseGetStatusCode = 0x916f0c0; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallResponseGetNetworkErrorCode = 0x916f0c8; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallResponseGetPlatformNetworkErrorMessage = 0x916f0d0; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallResponseGetHeader = 0x916f0d8; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallResponseGetNumHeaders = 0x916f0e0; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallResponseGetHeaderAtIndex = 0x916f0e8; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestGetUrl = 0x916f0f0; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestGetRequestBodyBytes = 0x916f0f8; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestGetNumHeaders = 0x916f100; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestGetHeaderAtIndex = 0x916f108; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestGetRetryAllowed = 0x916f110; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestGetRetryCacheId = 0x916f118; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestGetTimeout = 0x916f120; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestGetRetryDelay = 0x916f128; // [DelayImport]
    inline constexpr uintptr_t HCHttpCallRequestGetTimeoutWindow = 0x916f130; // [DelayImport]
    inline constexpr uintptr_t HCWebSocketCreate = 0x916f138; // [DelayImport]
    inline constexpr uintptr_t HCWebSocketSetHeader = 0x916f140; // [DelayImport]
    inline constexpr uintptr_t HCWebSocketConnectAsync = 0x916f148; // [DelayImport]
    inline constexpr uintptr_t HCGetWebSocketConnectResult = 0x916f150; // [DelayImport]
    inline constexpr uintptr_t HCWebSocketSendMessageAsync = 0x916f158; // [DelayImport]
    inline constexpr uintptr_t HCGetWebSocketSendMessageResult = 0x916f160; // [DelayImport]
    inline constexpr uintptr_t HCWebSocketCloseHandle = 0x916f168; // [DelayImport]
}

namespace ntdll_dll {
    inline constexpr uintptr_t RtlInitializeConditionVariable = 0x64385d8;
    inline constexpr uintptr_t RtlWakeAllConditionVariable = 0x64385e0;
    inline constexpr uintptr_t RtlInitializeCriticalSection = 0x6438678;
    inline constexpr uintptr_t VerSetConditionMask = 0x64387a8;
    inline constexpr uintptr_t RtlReleaseSRWLockShared = 0x64387d0;
    inline constexpr uintptr_t RtlAcquireSRWLockShared = 0x64387d8;
    inline constexpr uintptr_t RtlInitializeSListHead = 0x6438988;
    inline constexpr uintptr_t RtlInterlockedPopEntrySList = 0x6438990;
    inline constexpr uintptr_t TpSetPoolMaxThreads = 0x64389b0;
    inline constexpr uintptr_t RtlQueryUnbiasedInterruptTime = 0x64389d8;
    inline constexpr uintptr_t TpPostWork = 0x64389e0;
    inline constexpr uintptr_t ExpInterlockedPopEntrySListEnd_0x20 = 0x64389e8;
    inline constexpr uintptr_t RtlAddVectoredExceptionHandler = 0x6438a08;
    inline constexpr uintptr_t RtlRemoveVectoredExceptionHandler = 0x6438a20;
    inline constexpr uintptr_t RtlPcToFileHeader = 0x6438a80;
    inline constexpr uintptr_t RtlEncodePointer = 0x6438ad8;
    inline constexpr uintptr_t RtlUnwindEx = 0x6438af0;
    inline constexpr uintptr_t RtlDeleteCriticalSection = 0x6438c28;
    inline constexpr uintptr_t RtlDecodePointer = 0x6438c38;
    inline constexpr uintptr_t RtlAllocateHeap = 0x6438c40;
    inline constexpr uintptr_t RtlLeaveCriticalSection = 0x6438cc0;
    inline constexpr uintptr_t RtlEnterCriticalSection = 0x6438cf0;
    inline constexpr uintptr_t RtlRestoreLastWin32Error = 0x6438cf8;
    inline constexpr uintptr_t RtlFreeHeap = 0x6438d00;
    inline constexpr uintptr_t RtlQueryPerformanceCounter = 0x6438d58;
    inline constexpr uintptr_t RtlGetCurrentProcessorNumber = 0x6438d70;
    inline constexpr uintptr_t RtlQueryPerformanceFrequency = 0x6438d88;
    inline constexpr uintptr_t RtlAcquireSRWLockExclusive = 0x6438d98;
    inline constexpr uintptr_t RtlReleaseSRWLockExclusive = 0x6438da0;
    inline constexpr uintptr_t RtlInitializeConditionVariable_2 = 0x6438e00;
    inline constexpr uintptr_t RtlRestoreLastWin32Error_2 = 0x6439920;
    inline constexpr uintptr_t RtlWakeAddressSingle = 0x6439a28;
}

namespace powrprof_dll {
    inline constexpr uintptr_t CallNtPowerInformation = 0x6439a70;
}

namespace win32u_dll {
    inline constexpr uintptr_t NtUserSetWindowPos = 0x64391f0;
    inline constexpr uintptr_t NtUserIsTouchWindow = 0x6439220;
    inline constexpr uintptr_t NtUserSetCursor = 0x6439288;
    inline constexpr uintptr_t NtUserTrackMouseEvent = 0x64392b0;
    inline constexpr uintptr_t NtUserSetForegroundWindow = 0x64392f0;
    inline constexpr uintptr_t NtUserSetWindowPlacement = 0x6439340;
    inline constexpr uintptr_t NtUserGetKeyboardLayoutList = 0x64393b8;
    inline constexpr uintptr_t NtUserRegisterRawInputDevices = 0x64393d8;
    inline constexpr uintptr_t NtUserGetDoubleClickTime = 0x6439408;
    inline constexpr uintptr_t NtUserGetKeyboardState = 0x6439418;
    inline constexpr uintptr_t NtUserSetCursorPos = 0x6439428;
    inline constexpr uintptr_t NtUserClipCursor = 0x6439430;
    inline constexpr uintptr_t NtUserWindowFromPoint = 0x6439440;
    inline constexpr uintptr_t NtUserEnableWindow = 0x6439488;
    inline constexpr uintptr_t NtUserGetWindowPlacement = 0x6439658;
    inline constexpr uintptr_t NtUserShowWindow = 0x6439670;
    inline constexpr uintptr_t NtUserGetRawInputData = 0x64396b0;
}

namespace windows_storage_dll {
    inline constexpr uintptr_t SHGetKnownFolderPath = 0x6439120;
}

