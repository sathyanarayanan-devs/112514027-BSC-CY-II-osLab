#!/bin/bash

clear

while true
do
	echo "===== MENU ====="
	echo "1. Create File"
	echo "2. Delete File"
	echo "3. Copy File"
	echo "4. Rename File"
	echo "5. Diplay File"
	echo "6. Exit program"
	echo "================"

	read -p "Enter your choice: " ch

	case "$ch" in
		1)
			read -p "Enter the file name: " file
			touch "$file"
			echo "File created successfully"
			;;
		2)
			read -p "Enter the file name: " file
			rm "$file"
			echo "File deleted successfully"
			;;
		3)
			read -p "Enter the file name: " file
			cp "$file" "${file}_backup"
			echo "Backup copy of the file created successfully"
			;;
		4)
			read -p "Enter the old name of the file" oldFile
			read -p "Enter the new name of the file" newFIle
			mv "$oldFile" "$newFile"
			echo "File renamed successfully"
			;;
		5)
			read -p "Enter the file name: " file
			cat $file
			;;
		6)
			echo "Exiting the program..."
			exit 0
			;;
		*)
			echo "Invalid Choice"
			;;
	esac

	read -p "Press [Enter] to continue..." pause 
done
