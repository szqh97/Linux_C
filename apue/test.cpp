#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
using namespace std;

int main(int argc, char **argv)
{
    int fdc;
    struct stat info;
    if(argc != 2)
    {
	cout << "the param is less than 2!" << endl;
	exit(1);
    }
    if((fdc = stat(argv[1], &info)) < 0)
    {
	cout << "some error with stat()!" << endl;
	exit(0);
    }

    cout << info.st_mode <<" "
	 << info.st_ino << " "
	 << info.st_dev << " "
	 << info.st_rdev << " "
	 << info.st_nlink << " "
	 << info.st_uid << " "
	 << info.st_gid << " "
	 << info.st_size << " "
	 << info.st_atime << " "
	 << info.st_mtime << " "
	 << info.st_ctime << " "
	 << info.st_blksize << " "
	 << info.st_blocks << endl;
    exit(0);
}
