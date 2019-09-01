#include <iostream>
#include <cstring>
#include <string>
#define OSNAME_UNKNOWN


#ifdef OSNAME_DARWIN
	#define OSNAME "Darwin"
	#undef OSNAME
#endif

#ifdef OSNAME_LINUX
	#define OSNAME "Linux"
	#undef OSNAME
#endif

#ifdef OSNAME_FREEBSD
	#define OSNAME "FreeBSD"
	#undef OSNAME
#endif

#ifdef OSNAME_NT
	#define OSNAME "Windows_NT"
	#undef OSNAME
#endif

#ifdef OSNAME_HURD
	#define OSNAME "GNU"
	#undef OSNAME
#endif

#ifdef OSNAME_MSDOS
	#define OSNAME "MS-DOS"
	#undef OSNAME
#endif

#ifdef OSNAME_GNUkFreeBSD
	#define OSNAME "GNU/kFreeBSD"
	#undef OSNAME
#endif

#ifdef OSNAME_DragonFlyBSD
	#define OSNAME "DragonFly"
	#undef OSNAME
#endif


#ifdef OSNAME_UNKNOWN 
	#define OSNAME "Unknown"
#endif

#define MACHINE_TYPE_UNKNOWN

#ifdef MACHINETYPE_I386
	#define MACHINE_TYPE "i386"
	#undef MACHINE_TYPE_UNKNOWN
#endif

#ifdef MACHINETYPE_AMD64
	#define MACHINE_TYPE "x86_64"
	#undef MACHINE_TYPE_UNKNOWN
#endif

#ifdef MACHINETYPE_ARMV7
	#define MACHINE_TYPE "armv7l"
	#undef MACHINE_TYPE_UNKNOWN
#endif

#ifdef MACHINETYPE_ARMV6
	#define MACHINE_TYPE "armv6l"
	#undef MACHINE_TYPE_UNKNOWN
#endif

#ifdef MACHINETYPE_CUSTOM
/*
 * if you need customize, edit here
*/
	#define MACHINE_TYPE "custom"
	#undef MACHINE_TYPE_UNKNOWN
#endif

#ifdef MACHINE_TYPE_UNKNOWN
	#define MACHINE_TYPE "Unknown"
#endif

#define PROCESSOR_TYPE_UNKNOWN

#ifdef PROCESSOR_TYPE_I386
	#define PROCESSOR_TYPE "i386"
	#undef PROCESSOR_TYPE_UNKNOWN
#endif

#ifdef PROCESSOR_TYPE_I686
	#define PROCESSOR_TYPE "i686"
	#undef PROCESSOR_TYPE_UNKNOWN
#endif

#ifdef PROCESSOR_TYPE_AMD64
	#define PROCESSOR_TYPE "amd64"
	#undef PROCESSOR_TYPE_UNKNOWN
#endif

#ifdef PROCESSOR_TYPE_X64
	#define PROCESSOR_TYPE "x86_64"
	#undef PROCESSOR_TYPE_UNKNOWN
#endif

#ifdef PROCESSOR_TYPE_SPARC64
	#define PROCESSOR_TYPE "sparc64"
	#undef PROCESSOR_TYPE_UNKNOWN
#endif

#ifdef PROCESSOR_TYPE_POWERPC64
	#define PROCESSOR_TYPE "ppc64"
	#undef PROCESSOR_TYPE_UNKNOWN
#endif

#ifdef PROCESSOR_TYPE_POWERPC
	#define PROCESSOR_TYPE "powerpc"
	#undef PROCESSOR_TYPE_UNKNOWN
#endif

#ifdef PROCESSOR_TYPE_MIPS
	#define PROCESSOR_TYPE "mips"
	#undef PROCESSOR_TYPE_UNKNOWN
#endif

#ifdef PROCESSOR_TYPE_UNKNOWN
	#define PROCESSOR_TYPE "Unknown"
#endif



#define ERROR_MSG "uname: illegal option -- \n"
#define USAGE_MSG "usage: uname [-amnprsv]\n"
std::string arg;
int main(int argc, char* argv[]) {
	/*for (int i=0;i<argc;++i) {
		std::cout<<"DEBUG"<<argv[i]<<std::endl;
		
	}*/
	/*
	 * arg: a first, s>n>r>v>m>p
	*/
	if (argc < 2) {
		std::cout<<OSNAME<<std::endl;
		return 0;
	}
	arg = argv[1];
	int len = arg.length();
	if (arg[0] != '-') {
		std::cout<<USAGE_MSG;
	}
	
	
	return 0;
}
