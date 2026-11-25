/*  Dumped By       : ZIKA
/*  Dumped With     : ZIKA Dumper
/*  Roblox Version  : version-2c6fd5e09aaf4cfa
/*  Dumper Version  : 4.0.0
/*  Dumped At       : 17:37:33 2026-11-24
/*  Kernel & Threads: 280
*/

#pragma once

#include <cstdint>
#include <string>

namespace KernelDrivers {
    inline constexpr size_t LoadedDriverCount = 208;
}

/* Loaded Kernel Drivers (NtQuerySystemInformation SystemModuleInformation):
   [0] ntoskrnl.exe base=0xfffff800ec800000 size=0x1450000 path=\SystemRoot\system32\ntoskrnl.exe
   [1] hal.dll base=0xfffff800ee000000 size=0x6000 path=\SystemRoot\system32\hal.dll
   [2] kd.dll base=0xfffff8007e210000 size=0xb000 path=\SystemRoot\system32\kd.dll
   [3] symcryptk.dll base=0xfffff8007e220000 size=0xd000 path=\SystemRoot\system32\symcryptk.dll
   [4] cng.sys base=0xfffff8007e310000 size=0xe9000 path=\SystemRoot\System32\drivers\cng.sys
   [5] CLFS.SYS base=0xfffff8007e270000 size=0x8d000 path=\SystemRoot\System32\drivers\CLFS.SYS
   [6] tm.sys base=0xfffff8007e240000 size=0x2b000 path=\SystemRoot\System32\drivers\tm.sys
   [7] winaccel.sys base=0xfffff8007e400000 size=0x15000 path=\SystemRoot\System32\drivers\winaccel.sys
   [8] PSHED.dll base=0xfffff8007e420000 size=0x1d000 path=\SystemRoot\system32\PSHED.dll
   [9] BOOTVID.dll base=0xfffff8007e450000 size=0xd000 path=\SystemRoot\system32\BOOTVID.dll
   [10] FLTMGR.SYS base=0xfffff8007e590000 size=0x91000 path=\SystemRoot\System32\drivers\FLTMGR.SYS
   [11] msrpc.sys base=0xfffff8007e670000 size=0x65000 path=\SystemRoot\System32\drivers\msrpc.sys
   [12] ksecdd.sys base=0xfffff8007e630000 size=0x36000 path=\SystemRoot\System32\drivers\ksecdd.sys
   [13] clipsp.sys base=0xfffff8007e470000 size=0x118000 path=\SystemRoot\System32\drivers\clipsp.sys
   [14] cmimcext.sys base=0xfffff8007e6e0000 size=0x12000 path=\SystemRoot\System32\drivers\cmimcext.sys
   [15] werkernel.sys base=0xfffff8007e700000 size=0x16000 path=\SystemRoot\System32\drivers\werkernel.sys
   [16] ntosext.sys base=0xfffff8007e720000 size=0xd000 path=\SystemRoot\System32\drivers\ntosext.sys
   [17] watchdog.sys base=0xfffff8007e810000 size=0x20000 path=\SystemRoot\System32\drivers\watchdog.sys
   [18] WMILIB.SYS base=0xfffff8007ed60000 size=0xd000 path=\SystemRoot\System32\drivers\WMILIB.SYS
   [19] dxgkrnl.sys base=0xfffff8007e840000 size=0x511000 path=\SystemRoot\System32\drivers\dxgkrnl.sys
   [20] win32k.sys base=0xfffff8007e740000 size=0xc7000 path=\SystemRoot\System32\win32k.sys
   [21] CI.dll base=0xfffff8007ed80000 size=0x11e000 path=\SystemRoot\system32\CI.dll
   [22] globmerger.sys base=0xfffff8007eeb0000 size=0x20000 path=\SystemRoot\System32\drivers\globmerger.sys
   [23] Wdf01000.sys base=0xfffff8007eee0000 size=0xf0000 path=\SystemRoot\system32\drivers\Wdf01000.sys
   [24] WppRecorder.sys base=0xfffff8007f000000 size=0x13000 path=\SystemRoot\system32\drivers\WppRecorder.sys
   [25] WDFLDR.SYS base=0xfffff8007efe0000 size=0x17000 path=\SystemRoot\system32\drivers\WDFLDR.SYS
   [26] PRM.sys base=0xfffff8007f020000 size=0xf000 path=\SystemRoot\System32\DriverStore\FileRepository\prm.inf_amd64_7c38475757a1f016\PRM.sys
   [27] acpiex.sys base=0xfffff8007f040000 size=0x2a000 path=\SystemRoot\System32\Drivers\acpiex.sys
   [28] msseccore.sys base=0xfffff8007f070000 size=0xf000 path=\SystemRoot\system32\drivers\msseccore.sys
   [29] ACPI.sys base=0xfffff8007f090000 size=0xd6000 path=\SystemRoot\System32\drivers\ACPI.sys
   [30] msisadrv.sys base=0xfffff8007f170000 size=0xd000 path=\SystemRoot\System32\drivers\msisadrv.sys
   [31] pci.sys base=0xfffff8007f190000 size=0x93000 path=\SystemRoot\System32\drivers\pci.sys
   [32] tpm.sys base=0xfffff8007f230000 size=0x5a000 path=\SystemRoot\System32\drivers\tpm.sys
   [33] amdwps.sys base=0xfffff8007f820000 size=0xe000 path=\SystemRoot\System32\drivers\amdwps.sys
   [34] WindowsTrustedRT.sys base=0xfffff8007f840000 size=0x18000 path=\SystemRoot\system32\drivers\WindowsTrustedRT.sys
   [35] intelpep.sys base=0xfffff8007f860000 size=0x9f000 path=\SystemRoot\System32\drivers\intelpep.sys
   [36] WindowsTrustedRTProxy.sys base=0xfffff8007f910000 size=0xc000 path=\SystemRoot\System32\drivers\WindowsTrustedRTProxy.sys
   [37] IntelPMT.sys base=0xfffff8007f930000 size=0x13000 path=\SystemRoot\System32\drivers\IntelPMT.sys
   [38] pcw.sys base=0xfffff8007f950000 size=0x17000 path=\SystemRoot\System32\drivers\pcw.sys
   [39] vdrvroot.sys base=0xfffff8007f970000 size=0x1c000 path=\SystemRoot\System32\drivers\vdrvroot.sys
   [40] amdkmpfd.sys base=0xfffff8007f9a0000 size=0x19000 path=\SystemRoot\System32\drivers\amdkmpfd.sys
   [41] pdc.sys base=0xfffff8007f9c0000 size=0x35000 path=\SystemRoot\system32\drivers\pdc.sys
   [42] CEA.sys base=0xfffff8007fa00000 size=0x18000 path=\SystemRoot\system32\drivers\CEA.sys
   [43] partmgr.sys base=0xfffff8007fa20000 size=0x36000 path=\SystemRoot\System32\drivers\partmgr.sys
   [44] spaceport.sys base=0xfffff8007fa60000 size=0xf8000 path=\SystemRoot\System32\drivers\spaceport.sys
   [45] volmgr.sys base=0xfffff8007fb60000 size=0x1e000 path=\SystemRoot\System32\drivers\volmgr.sys
   [46] volmgrx.sys base=0xfffff8007fb90000 size=0x67000 path=\SystemRoot\System32\drivers\volmgrx.sys
   [47] mountmgr.sys base=0xfffff8007fc00000 size=0x23000 path=\SystemRoot\System32\drivers\mountmgr.sys
   [48] storahci.sys base=0xfffff8007fc30000 size=0x39000 path=\SystemRoot\System32\drivers\storahci.sys
   [49] storport.sys base=0xfffff8007fc70000 size=0x27c000 path=\SystemRoot\System32\drivers\storport.sys
   [50] EhStorClass.sys base=0xfffff8007ff00000 size=0x28000 path=\SystemRoot\System32\drivers\EhStorClass.sys
   [51] WinSetupMon.sys base=0xfffff8007ff30000 size=0x27000 path=\SystemRoot\system32\DRIVERS\WinSetupMon.sys
   [52] fileinfo.sys base=0xfffff8007ff60000 size=0x1d000 path=\SystemRoot\System32\drivers\fileinfo.sys
   [53] Wof.sys base=0xfffff8007ff90000 size=0x47000 path=\SystemRoot\System32\Drivers\Wof.sys
   [54] WdFilter.sys base=0xfffff80080410000 size=0xa8000 path=\SystemRoot\system32\drivers\wd\WdFilter.sys
   [55] Ntfs.sys base=0xfffff800804c0000 size=0x389000 path=\SystemRoot\System32\Drivers\Ntfs.sys
   [56] Fs_Rec.sys base=0xfffff80080850000 size=0xf000 path=\SystemRoot\System32\Drivers\Fs_Rec.sys
   [57] ndis.sys base=0xfffff80080870000 size=0x1c4000 path=\SystemRoot\system32\drivers\ndis.sys
   [58] NETIO.SYS base=0xfffff80080a40000 size=0xb5000 path=\SystemRoot\system32\drivers\NETIO.SYS
   [59] fse.sys base=0xfffff80080b00000 size=0x37000 path=\SystemRoot\system32\drivers\fse.sys
   [60] fwpkclnt.sys base=0xfffff80080b40000 size=0x89000 path=\SystemRoot\system32\drivers\fwpkclnt.sys
   [61] ksecpkg.sys base=0xfffff80080bd0000 size=0x38000 path=\SystemRoot\System32\Drivers\ksecpkg.sys
   [62] Kerb3961Kernel.sys base=0xfffff80080c10000 size=0x24000 path=\SystemRoot\System32\Drivers\Kerb3961Kernel.sys
   [63] amdpsp.sys base=0xfffff80080c40000 size=0xd000 path=\SystemRoot\System32\drivers\amdpsp.sys
   [64] tcpip.sys base=0xfffff80080c60000 size=0x359000 path=\SystemRoot\System32\drivers\tcpip.sys
   [65] wfplwfs.sys base=0xfffff80080fc0000 size=0x3b000 path=\SystemRoot\System32\drivers\wfplwfs.sys
   [66] VmsProxy.sys base=0xfffff80081000000 size=0xf000 path=\SystemRoot\system32\drivers\VmsProxy.sys
   [67] VmsProxyHNic.sys base=0xfffff80081020000 size=0x10000 path=\SystemRoot\system32\drivers\VmsProxyHNic.sys
   [68] fvevol.sys base=0xfffff80081040000 size=0xec000 path=\SystemRoot\System32\DRIVERS\fvevol.sys
   [69] volume.sys base=0xfffff80081140000 size=0xb000 path=\SystemRoot\System32\drivers\volume.sys
   [70] volsnap.sys base=0xfffff80081150000 size=0x85000 path=\SystemRoot\System32\drivers\volsnap.sys
   [71] rdyboost.sys base=0xfffff800811e0000 size=0x50000 path=\SystemRoot\System32\drivers\rdyboost.sys
   [72] nvmedisk.sys base=0xfffff80081240000 size=0x1d000 path=\SystemRoot\System32\drivers\nvmedisk.sys
   [73] mup.sys base=0xfffff80081270000 size=0x2b000 path=\SystemRoot\System32\Drivers\mup.sys
   [74] iorate.sys base=0xfffff800812a0000 size=0x14000 path=\SystemRoot\system32\drivers\iorate.sys
   [75] disk.sys base=0xfffff800812e0000 size=0x21000 path=\SystemRoot\System32\drivers\disk.sys
   [76] CLASSPNP.SYS base=0xfffff80081310000 size=0x7c000 path=\SystemRoot\System32\drivers\CLASSPNP.SYS
   [77] crashdmp.sys base=0xfffff80082480000 size=0x28000 path=\SystemRoot\System32\Drivers\crashdmp.sys
   [78] cdrom.sys base=0xfffff80081600000 size=0x39000 path=\SystemRoot\System32\drivers\cdrom.sys
   [79] filecrypt.sys base=0xfffff80081640000 size=0x18000 path=\SystemRoot\system32\drivers\filecrypt.sys
   [80] tbs.sys base=0xfffff80081660000 size=0x10000 path=\SystemRoot\system32\drivers\tbs.sys
   [81] UCPD.sys base=0xfffff80081680000 size=0x35000 path=\SystemRoot\system32\drivers\UCPD.sys
   [82] Null.SYS base=0xfffff800816c0000 size=0xd000 path=\SystemRoot\System32\Drivers\Null.SYS
   [83] Beep.SYS base=0xfffff800816e0000 size=0xa000 path=\SystemRoot\System32\Drivers\Beep.SYS
   [84] uiomap.sys base=0xfffff800816f0000 size=0x11000 path=\SystemRoot\System32\DriverStore\FileRepository\uiomap.inf_amd64_16bca85dc6b65e2c\uiomap.sys
   [85] BasicDisplay.sys base=0xfffff80081710000 size=0x1a000 path=\SystemRoot\System32\DriverStore\FileRepository\basicdisplay.inf_amd64_9f34636ebdd89def\BasicDisplay.sys
   [86] BasicRender.sys base=0xfffff80081730000 size=0x13000 path=\SystemRoot\System32\DriverStore\FileRepository\basicrender.inf_amd64_ff9364d9eff240c3\BasicRender.sys
   [87] Npfs.SYS base=0xfffff80081750000 size=0x1c000 path=\SystemRoot\System32\Drivers\Npfs.SYS
   [88] Msfs.SYS base=0xfffff80081780000 size=0x14000 path=\SystemRoot\System32\Drivers\Msfs.SYS
   [89] CimFS.SYS base=0xfffff800817a0000 size=0x45000 path=\SystemRoot\System32\Drivers\CimFS.SYS
   [90] tdx.sys base=0xfffff800817f0000 size=0x2a000 path=\SystemRoot\system32\DRIVERS\tdx.sys
   [91] TDI.SYS base=0xfffff80081820000 size=0x11000 path=\SystemRoot\system32\DRIVERS\TDI.SYS
   [92] netbt.sys base=0xfffff80081840000 size=0x59000 path=\SystemRoot\System32\DRIVERS\netbt.sys
   [93] afunix.sys base=0xfffff800818a0000 size=0x16000 path=\SystemRoot\system32\drivers\afunix.sys
   [94] afd.sys base=0xfffff800818c0000 size=0xb7000 path=\SystemRoot\system32\drivers\afd.sys
   [95] vwififlt.sys base=0xfffff80081980000 size=0x1e000 path=\SystemRoot\System32\drivers\vwififlt.sys
   [96] vfpext.sys base=0xfffff800819b0000 size=0x1a2000 path=\SystemRoot\system32\drivers\vfpext.sys
   [97] pacer.sys base=0xfffff80081b60000 size=0x32000 path=\SystemRoot\System32\drivers\pacer.sys
   [98] ndiscap.sys base=0xfffff80081ba0000 size=0x18000 path=\SystemRoot\System32\drivers\ndiscap.sys
   [99] netbios.sys base=0xfffff80081bc0000 size=0x19000 path=\SystemRoot\system32\drivers\netbios.sys
   [100] Vid.sys base=0xfffff80081be0000 size=0xdd000 path=\SystemRoot\System32\drivers\Vid.sys
   [101] winhvr.sys base=0xfffff80081cd0000 size=0x29000 path=\SystemRoot\System32\drivers\winhvr.sys
   [102] rdbss.sys base=0xfffff80081d00000 size=0x8e000 path=\SystemRoot\system32\DRIVERS\rdbss.sys
   [103] csc.sys base=0xfffff80081da0000 size=0x9a000 path=\SystemRoot\system32\drivers\csc.sys
   [104] nsiproxy.sys base=0xfffff80081e40000 size=0x13000 path=\SystemRoot\system32\drivers\nsiproxy.sys
   [105] npsvctrig.sys base=0xfffff80081e60000 size=0x10000 path=\SystemRoot\System32\drivers\npsvctrig.sys
   [106] mssmbios.sys base=0xfffff80081e80000 size=0x11000 path=\SystemRoot\System32\drivers\mssmbios.sys
   [107] hvsocketcontrol.sys base=0xfffff80081ea0000 size=0xe000 path=\SystemRoot\system32\drivers\hvsocketcontrol.sys
   [108] hvsocket.sys base=0xfffff80081ec0000 size=0x2d000 path=\SystemRoot\system32\drivers\hvsocket.sys
   [109] dfsc.sys base=0xfffff80081f00000 size=0x31000 path=\SystemRoot\System32\Drivers\dfsc.sys
   [110] bam.sys base=0xfffff80081f90000 size=0x1c000 path=\SystemRoot\system32\drivers\bam.sys
   [111] ahcache.sys base=0xfffff80081fc0000 size=0x5d000 path=\SystemRoot\system32\DRIVERS\ahcache.sys
   [112] vmbusr.sys base=0xfffff80082030000 size=0x50000 path=\SystemRoot\System32\drivers\vmbusr.sys
   [113] vmbkmclr.sys base=0xfffff80082090000 size=0x34000 path=\SystemRoot\System32\drivers\vmbkmclr.sys
   [114] amdxe.sys base=0xfffff800820d0000 size=0xf000 path=\SystemRoot\System32\drivers\amdxe.sys
   [115] amdfendr.sys base=0xfffff800820f0000 size=0x52000 path=\SystemRoot\System32\DriverStore\FileRepository\amdfendr.inf_amd64_47725f5567f931ee\amdfendr.sys
   [116] hvservice.sys base=0xfffff80082150000 size=0x16000 path=\SystemRoot\System32\drivers\hvservice.sys
   [117] CompositeBus.sys base=0xfffff80082170000 size=0x14000 path=\SystemRoot\System32\DriverStore\FileRepository\compositebus.inf_amd64_8cf6fa9d3afdfa25\CompositeBus.sys
   [118] kdnic.sys base=0xfffff80082190000 size=0x11000 path=\SystemRoot\System32\drivers\kdnic.sys
   [119] amdsafd.sys base=0xfffff800821b0000 size=0x1d000 path=\SystemRoot\System32\DriverStore\FileRepository\amdsafd.inf_amd64_960126269e89c62e\amdsafd.sys
   [120] portcls.sys base=0xfffff800821e0000 size=0x75000 path=\SystemRoot\System32\drivers\portcls.sys
   [121] drmk.sys base=0xfffff80082260000 size=0x20000 path=\SystemRoot\System32\drivers\drmk.sys
   [122] ks.sys base=0xfffff80082290000 size=0x87000 path=\SystemRoot\System32\drivers\ks.sys
   [123] ksthunk.sys base=0xfffff80082320000 size=0x13000 path=\SystemRoot\system32\drivers\ksthunk.sys
   [124] umbus.sys base=0xfffff80082340000 size=0x16000 path=\SystemRoot\System32\DriverStore\FileRepository\umbus.inf_amd64_914dd46b4b013b1b\umbus.sys
   [125] wmiacpi.sys base=0xfffff80082360000 size=0xe000 path=\SystemRoot\System32\drivers\wmiacpi.sys
   [126] amdkmdag.sys base=0xfffff8008f300000 size=0x660d000 path=\SystemRoot\System32\DriverStore\FileRepository\u0201039.inf_amd64_89c3272f19eab06b\B025980\amdkmdag.sys
   [127] HDAudBus.sys base=0xfffff80095920000 size=0x32000 path=\SystemRoot\System32\drivers\HDAudBus.sys
   [128] USBXHCI.SYS base=0xfffff8008f200000 size=0xc2000 path=\SystemRoot\System32\drivers\USBXHCI.SYS
   [129] ucx01000.sys base=0xfffff80095960000 size=0x48000 path=\SystemRoot\system32\drivers\ucx01000.sys
   [130] rt25cx21x64.sys base=0xfffff80082380000 size=0xd8000 path=\SystemRoot\System32\DriverStore\FileRepository\rt25cx21x64.inf_amd64_8e61b4ea25373168\rt25cx21x64.sys
   [131] netadaptercx.sys base=0xfffff80082ae0000 size=0x5e000 path=\SystemRoot\system32\drivers\netadaptercx.sys
   [132] ExecutionContext.sys base=0xfffff80082b50000 size=0x1f000 path=\SystemRoot\System32\Drivers\ExecutionContext.sys
   [133] AMDPCIDev.sys base=0xfffff80082b80000 size=0xb000 path=\SystemRoot\System32\drivers\AMDPCIDev.sys
   [134] serial.sys base=0xfffff80082b90000 size=0x1e000 path=\SystemRoot\System32\drivers\serial.sys
   [135] serenum.sys base=0xfffff80082bc0000 size=0x10000 path=\SystemRoot\System32\drivers\serenum.sys
   [136] amdgpio2.sys base=0xfffff80082be0000 size=0xd000 path=\SystemRoot\System32\drivers\amdgpio2.sys
   [137] msgpioclx.sys base=0xfffff80082600000 size=0x35000 path=\SystemRoot\System32\Drivers\msgpioclx.sys
   [138] amdppm.sys base=0xfffff80082640000 size=0x4a000 path=\SystemRoot\System32\drivers\amdppm.sys
   [139] amdgpio3.sys base=0xfffff80082690000 size=0xa000 path=\SystemRoot\System32\drivers\amdgpio3.sys
   [140] UEFI.sys base=0xfffff800826a0000 size=0x13000 path=\SystemRoot\System32\DriverStore\FileRepository\uefi.inf_amd64_3da9b4f73a33895b\UEFI.sys
   [141] vpcivsp.sys base=0xfffff800826c0000 size=0x3c000 path=\SystemRoot\System32\drivers\vpcivsp.sys
   [142] storvsp.sys base=0xfffff80082710000 size=0x4b000 path=\SystemRoot\System32\drivers\storvsp.sys
   [143] amdfendrmgr.sys base=0xfffff80082760000 size=0xa000 path=\SystemRoot\System32\DriverStore\FileRepository\amdfendr.inf_amd64_47725f5567f931ee\amdfendrmgr.sys
   [144] NdisVirtualBus.sys base=0xfffff80082770000 size=0xe000 path=\SystemRoot\System32\drivers\NdisVirtualBus.sys
   [145] swenum.sys base=0xfffff80082790000 size=0xc000 path=\SystemRoot\System32\DriverStore\FileRepository\swenum.inf_amd64_8b9dd76f362e3ec6\swenum.sys
   [146] rdpbus.sys base=0xfffff800827b0000 size=0x10000 path=\SystemRoot\System32\drivers\rdpbus.sys
   [147] virtual-mic.sys base=0xfffff800827d0000 size=0xd000 path=\SystemRoot\system32\drivers\virtual-mic.sys
   [148] virtual-speaker.sys base=0xfffff800827f0000 size=0xc000 path=\SystemRoot\system32\drivers\virtual-speaker.sys
   [149] AtihdWT6.sys base=0xfffff80082810000 size=0x3e000 path=\SystemRoot\System32\DriverStore\FileRepository\atihdwt6.inf_amd64_c453efe9e6a7ef40\AtihdWT6.sys
   [150] UsbHub3.sys base=0xfffff80082860000 size=0xb4000 path=\SystemRoot\System32\drivers\UsbHub3.sys
   [151] USBD.SYS base=0xfffff80082920000 size=0x10000 path=\SystemRoot\System32\drivers\USBD.SYS
   [152] HdAudio.sys base=0xfffff80082940000 size=0x85000 path=\SystemRoot\System32\drivers\HdAudio.sys
   [153] fastfat.SYS base=0xfffff800829d0000 size=0x6c000 path=\SystemRoot\System32\Drivers\fastfat.SYS
   [154] usbccgp.sys base=0xfffff80082a50000 size=0x34000 path=\SystemRoot\System32\drivers\usbccgp.sys
   [155] hidusb.sys base=0xfffff80082a90000 size=0x14000 path=\SystemRoot\System32\drivers\hidusb.sys
   [156] HIDCLASS.SYS base=0xfffff80082f40000 size=0x4f000 path=\SystemRoot\System32\drivers\HIDCLASS.SYS
   [157] HIDPARSE.SYS base=0xfffff80082fa0000 size=0x1a000 path=\SystemRoot\System32\drivers\HIDPARSE.SYS
   [158] mouhid.sys base=0xfffff80082fc0000 size=0x12000 path=\SystemRoot\System32\drivers\mouhid.sys
   [159] mouclass.sys base=0xfffff80082fe0000 size=0x15000 path=\SystemRoot\System32\drivers\mouclass.sys
   [160] kbdhid.sys base=0xfffff80082c00000 size=0x14000 path=\SystemRoot\System32\drivers\kbdhid.sys
   [161] kbdclass.sys base=0xfffff80082c20000 size=0x15000 path=\SystemRoot\System32\drivers\kbdclass.sys
   [162] WinUSB.SYS base=0xfffff80082c40000 size=0x23000 path=\SystemRoot\System32\drivers\WinUSB.SYS
   [163] BTHUSB.sys base=0xfffff80082c70000 size=0x23000 path=\SystemRoot\System32\drivers\BTHUSB.sys
   [164] BTHport.sys base=0xfffff80082ca0000 size=0x239000 path=\SystemRoot\System32\drivers\BTHport.sys
   [165] win32kbase.sys base=0xfffff80083840000 size=0x346000 path=\SystemRoot\System32\win32kbase.sys
   [166] win32kfull.sys base=0xfffff80083000000 size=0x43b000 path=\SystemRoot\System32\win32kfull.sys
   [167] win32kbase_rs.sys base=0xfffff80083440000 size=0x26000 path=\SystemRoot\System32\win32kbase_rs.sys
   [168] rfcomm.sys base=0xfffff80083470000 size=0x3e000 path=\SystemRoot\System32\drivers\rfcomm.sys
   [169] dump_diskdump.sys base=0xfffff800834e0000 size=0x11000 path=\SystemRoot\System32\Drivers\dump_diskdump.sys
   [170] dump_storahci.sys base=0xfffff80083540000 size=0x39000 path=\SystemRoot\System32\drivers\dump_storahci.sys
   [171] dump_dumpfve.sys base=0xfffff800835b0000 size=0x24000 path=\SystemRoot\System32\Drivers\dump_dumpfve.sys
   [172] BthEnum.sys base=0xfffff800835e0000 size=0x24000 path=\SystemRoot\System32\drivers\BthEnum.sys
   [173] bthpan.sys base=0xfffff80083610000 size=0x28000 path=\SystemRoot\System32\drivers\bthpan.sys
   [174] Microsoft.Bluetooth.Legacy.LEEnumerator.sys base=0xfffff80083640000 size=0x27000 path=\SystemRoot\System32\drivers\Microsoft.Bluetooth.Legacy.LEEnumerator.sys
   [175] dxgmms2.sys base=0xfffff80083670000 size=0x127000 path=\SystemRoot\System32\drivers\dxgmms2.sys
   [176] monitor.sys base=0xfffff800837a0000 size=0x20000 path=\SystemRoot\System32\drivers\monitor.sys
   [177] cdd.dll base=0xfffff800837d0000 size=0x52000 path=\SystemRoot\System32\cdd.dll
   [178] bfs.sys base=0xfffff80083b90000 size=0x2b000 path=\SystemRoot\system32\drivers\bfs.sys
   [179] luafv.sys base=0xfffff80083bc0000 size=0x34000 path=\SystemRoot\system32\drivers\luafv.sys
   [180] wcifs.sys base=0xfffff80082ee0000 size=0x3d000 path=\SystemRoot\system32\drivers\wcifs.sys
   [181] cldflt.sys base=0xfffff800824b0000 size=0x95000 path=\SystemRoot\system32\drivers\cldflt.sys
   [182] UnionFS.sys base=0xfffff80082550000 size=0x78000 path=\SystemRoot\system32\drivers\UnionFS.sys
   [183] mslldp.sys base=0xfffff80082ab0000 size=0x1c000 path=\SystemRoot\system32\drivers\mslldp.sys
   [184] storqosflt.sys base=0xfffff800959b0000 size=0x1c000 path=\SystemRoot\system32\drivers\storqosflt.sys
   [185] bindflt.sys base=0xfffff80081f40000 size=0x2e000 path=\SystemRoot\system32\drivers\bindflt.sys
   [186] HTTP.sys base=0xfffff8007c7b0000 size=0x216000 path=\SystemRoot\system32\drivers\HTTP.sys
   [187] lltdio.sys base=0xfffff8007c000000 size=0x1a000 path=\SystemRoot\system32\drivers\lltdio.sys
   [188] rspndr.sys base=0xfffff8007c020000 size=0x1e000 path=\SystemRoot\system32\drivers\rspndr.sys
   [189] vmswitch.sys base=0xfffff8007c050000 size=0x285000 path=\SystemRoot\System32\drivers\vmswitch.sys
   [190] wanarp.sys base=0xfffff8007c2e0000 size=0x20000 path=\SystemRoot\System32\DRIVERS\wanarp.sys
   [191] bowser.sys base=0xfffff8007c310000 size=0x2a000 path=\SystemRoot\system32\DRIVERS\bowser.sys
   [192] mpsdrv.sys base=0xfffff8007c340000 size=0x1d000 path=\SystemRoot\System32\drivers\mpsdrv.sys
   [193] mrxsmb.sys base=0xfffff8007c370000 size=0xe4000 path=\SystemRoot\system32\DRIVERS\mrxsmb.sys
   [194] mrxsmb20.sys base=0xfffff8007c460000 size=0x5d000 path=\SystemRoot\system32\DRIVERS\mrxsmb20.sys
   [195] AMDRyzenMasterDriver.sys base=0xfffff8007c4d0000 size=0xd000 path=\??\C:\WINDOWS\system32\AMDRyzenMasterDriver.sys
   [196] srvnet.sys base=0xfffff8007c4f0000 size=0x64000 path=\SystemRoot\System32\DRIVERS\srvnet.sys
   [197] peauth.sys base=0xfffff8007c590000 size=0xd5000 path=\SystemRoot\system32\drivers\peauth.sys
   [198] tcpipreg.sys base=0xfffff8007c670000 size=0x16000 path=\SystemRoot\System32\drivers\tcpipreg.sys
   [199] Ndu.sys base=0xfffff8007c690000 size=0x2f000 path=\SystemRoot\system32\drivers\Ndu.sys
   [200] mmcss.sys base=0xfffff8007c6d0000 size=0x16000 path=\SystemRoot\system32\drivers\mmcss.sys
   [201] wtd.sys base=0xfffff8007c6f0000 size=0x1e000 path=\SystemRoot\System32\drivers\wtd.sys
   [202] srv2.sys base=0xfffff8007cb10000 size=0xf9000 path=\SystemRoot\System32\DRIVERS\srv2.sys
   [203] p9rdr.sys base=0xfffff8007cc10000 size=0x23000 path=\SystemRoot\System32\drivers\p9rdr.sys
   [204] condrv.sys base=0xfffff8007cc40000 size=0x16000 path=\SystemRoot\System32\drivers\condrv.sys
   [205] KslD.sys base=0xfffff8007cc60000 size=0x18000 path=\SystemRoot\system32\drivers\wd\KslD.sys
   [206] WdNisDrv.sys base=0xfffff8007cc80000 size=0x25000 path=\SystemRoot\system32\drivers\wd\WdNisDrv.sys
   [207] qwavedrv.sys base=0xfffff8007ccb0000 size=0x16000 path=\SystemRoot\system32\drivers\qwavedrv.sys
*/

/* Live Process Threads (NtQueryInformationThread ThreadQuerySetWin32StartAddress):
   TID=20228 start=0x7ff6645b6004 mod=RobloxPlayerBeta.exe+0x9366004
   TID=2872 start=0x7fffa4a89df0 mod=RobloxPlayerBeta.dll+0x319df0 [HYPERION]
   TID=8348 start=0x7ff844e3ff90 mod=WINMM.dll+0xff90
   TID=17700 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=5656 start=0x7ff65b251820 mod=RobloxPlayerBeta.exe+0x1820
   TID=11408 start=0x7ff65b251820 mod=RobloxPlayerBeta.exe+0x1820
   TID=14568 start=0x7ff84c8d9320 mod=mswsock.dll+0x19320
   TID=22036 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=25532 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=25296 start=0x7ff65b251820 mod=RobloxPlayerBeta.exe+0x1820
   TID=10644 start=0x7ff65b251820 mod=RobloxPlayerBeta.exe+0x1820
   TID=23644 start=0x7ff65b251820 mod=RobloxPlayerBeta.exe+0x1820
   TID=14948 start=0x7ff65b251820 mod=RobloxPlayerBeta.exe+0x1820
   TID=6180 start=0x7ff65b251820 mod=RobloxPlayerBeta.exe+0x1820
   TID=15940 start=0x7ff65b251820 mod=RobloxPlayerBeta.exe+0x1820
   TID=9840 start=0x7ff65b251820 mod=RobloxPlayerBeta.exe+0x1820
   TID=22496 start=0x7ff65b251820 mod=RobloxPlayerBeta.exe+0x1820
   TID=18108 start=0x7ff65b251820 mod=RobloxPlayerBeta.exe+0x1820
   TID=24732 start=0x7ff65b251820 mod=RobloxPlayerBeta.exe+0x1820
   TID=25172 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=22440 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=14220 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=25168 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=7892 start=0x7ff8504d4990 mod=ntdll.dll+0x24990
   TID=23612 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=22396 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=25360 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=14016 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=15452 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=19436 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=22588 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=22996 start=0x7ff8433bc378 mod=atidxx64.dll+0xaec378
   TID=9068 start=0x7ff8433bc378 mod=atidxx64.dll+0xaec378
   TID=6428 start=0x7ff8433bc378 mod=atidxx64.dll+0xaec378
   TID=24120 start=0x7ff8433bc378 mod=atidxx64.dll+0xaec378
   TID=12652 start=0x7ff8433bc378 mod=atidxx64.dll+0xaec378
   TID=5640 start=0x7ff8433bc378 mod=atidxx64.dll+0xaec378
   TID=20896 start=0x7ff8433bc378 mod=atidxx64.dll+0xaec378
   TID=17616 start=0x7ff8433bc378 mod=atidxx64.dll+0xaec378
   TID=17764 start=0x7ff8433bc378 mod=atidxx64.dll+0xaec378
   TID=8616 start=0x7ff8433bc378 mod=atidxx64.dll+0xaec378
   TID=16952 start=0x7ff8433bc378 mod=atidxx64.dll+0xaec378
   TID=17128 start=0x7ff8433bc378 mod=atidxx64.dll+0xaec378
   TID=25584 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=24084 start=0x7ff83717bd20 mod=inputhost.dll+0x3bd20
   TID=3356 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=16852 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=24132 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=19964 start=0x7ff841085270 mod=amdihk64.dll+0x5270
   TID=13168 start=0x7ff841086520 mod=amdihk64.dll+0x6520
   TID=14076 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=18252 start=0x7ff8433bc378 mod=atidxx64.dll+0xaec378
   TID=6408 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=18312 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=25464 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=12068 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=23032 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=12900 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=1896 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=1356 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=23584 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=18256 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=25040 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=2860 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=18076 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=3520 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=23728 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=4396 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=10820 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=4984 start=0x7ff66106da60 mod=RobloxPlayerBeta.exe+0x5e1da60
   TID=19404 start=0x7ff8504d4990 mod=ntdll.dll+0x24990
   TID=19232 start=0x7ff8504d4990 mod=ntdll.dll+0x24990
*/
