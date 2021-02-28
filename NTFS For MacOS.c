//Written by JiangLai.
//Tested Terminal:MacOS BigSur(Intel Core&Apple Silicon M1)
//Under GNU2.0 License!
//WARNING: ONLY FOR MACOS! NOT FOR OTHER UNIX(LIKE UNIX) KERNEL SYSTEM!
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("echo \"WARNING: ONLY FOR MACOS! NOT FOR OTHER UNIX(LIKE UNIX) KERNEL SYSTEM!\";sudo mount;echo \"Please keep the \"/dev/aaa\" and \"/Volumes/bbb\" in mind!\";echo \"Please input the \"aaa\" and click \"enter\"\";read -a dev;echo \"Then, input the \"bbb\" and click \"enter\"\";read -a volume;sudo umount /dev/${dev};sudo mkdir /Volumes/${volume};sudo mount -t ntfs -o rw,auto,nobrowse /dev/${dev} /Volumes/${volume};sudo ln -s /Volumes/${volume} ~/Desktop/${volume};echo \"Your disk \"{volume}\" on \"{dev}\" is now writeable until next time you reinsert it!\"");
    return 0;
}