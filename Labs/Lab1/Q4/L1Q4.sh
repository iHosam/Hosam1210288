#!/bin/bash


# Q4: Create a shell script file that perform full-backup of your 
# Downloads folder (i.e. archived & compressed) then save the 
# (.tgz) file into Documents and clean the download folder. 

# A script to clean Downloads in Documents by moving files to ARCHIVED folder inside.
# This shell program will archive Downloads folder in Documents, all the files will be
# moved to a sub folder called archived in the selected folder

#!/bin/bash

cd ~/Documents
ls

	cp -r $Downloads archived
	rm -r "$Downloads"
	mkdir -v "$Downloads"
	mv archived $Downloads
	
fi

