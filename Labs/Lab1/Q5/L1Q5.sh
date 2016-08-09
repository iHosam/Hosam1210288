#!/bin/bash


# Q5: Create a shell script file that perform incremental-backup 
# of your Downloads folder (i.e. archive & compress updated files 
# only) then save the (.tgz) file into Documents but do not clean 
# the download folder. 

# A script takes backup of your updated files on the Download file then
# store it as compressed file (.tar.gz).

#!/bin/bash

tar cvzf DownloadsBackup.tar.gz Downloads/