# Author : Prathamesh Patil
selectedFile=""
while [ 1 ]
do
	clear
	echo --------------------------------------------------------------------------------
	echo \| 1. Create 2. Select File 3. Display 4. Insert 5. Search 6. Modify 7. Delete 8. Exit.   \|
	echo --------------------------------------------------------------------------------

	echo -n Enter the choice:
	read choice
	case $choice in
		1)
			echo -n Enter the file name: 
			read fname
			if [ -e $fname ]
			then
				echo File $fname already exists.
				selectedFile=$fname
				echo $fname is selected.
			else
				>> $fname
				selectedFile=$fname
				echo File $fname is created and selected.
			fi
			;;
		2)
			echo -n Enter the file name: 
			read fname
			if [ -e $fname ]
			then
				selectedFile=$fname
				echo $fname is selected.
			else
				echo $fname not found.
			fi
			;;
		3)
			if [ "$selectedFile" = "" ]
			then
				echo Please select a file first.
			else
				echo FILE CONTENTS: \\n 
                        	sort -n $selectedFile

			fi
			;;
		4)
			if [ "$selectedFile" = "" ]
			then
				echo Please select a file first.
			else
				echo -n Enter the PRN: 
				read prn
				grep  -w "$prn" $selectedFile
				ans=$?
				if [ $ans -eq 0 ]
				then
					echo -n Record already exists.
				else
					echo -n Enter the student name: 
					read name
					echo $prn $name >> $selectedFile
					echo -n Record inserted successfully.
				fi
			
			fi
			;;
		5)
			if [ "$selectedFile" = "" ]
                        then
                                echo Please select a file first.
                        else
				echo -n Enter the PRN to search: 
				read prn
				grep -w "$prn" $selectedFile
				ans=$?
				if [ $ans -eq 0 ]
				then
					echo is present in the database.
				else
					echo $prn is not present in the database.
				fi
			fi
			;;

		6)
			if [ "$selectedFile" = "" ]
                        then
                                echo -n Please select a file first.
                        else
				echo -n Enter the PRN: 
				read prn
				grep -w "$prn" $selectedFile
				ans=$?
				if [ $ans -eq 0 ]
				then
					echo Enter new PRN and new Name: 
					read nPrn nName
					
					grep -v "$prn" $selectedFile >> temp
					echo "$nPrn $nName" >> temp
					mv "temp" $selectedFile
					echo Record successfully modified
				
				else
					echo $prn is not present in the database.
				fi

			fi
			;;
		
		7)
			if [ "$selectedFile" = "" ]
                        then
                                echo Please select a file first.
                        else
				echo Enter the PRN to delete: 
				read prn
				grep -w $prn $selectedFile
				ans=$?
				if [ $ans -eq 0 ]
				then
					grep -v -w $prn $selectedFile >> temp
					rm $selectedFile
					mv "temp" $selectedFile
					echo $prn is deleted successfully.
				else
					echo $prn is not present in the database.
				fi
			fi
			;;
		8) 	
			echo -n Shutting down...
			break
			;;
		
		*)
			echo Invalid input!
			;;
	esac
	echo Press any key to continue...
	read _
done




