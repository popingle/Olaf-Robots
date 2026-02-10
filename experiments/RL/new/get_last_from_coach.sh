last=$(ssh -p4242 olaf-robotics@s-nguyen.net "cd /home/olaf-robotics/MISC/olaf_robot/experiments/RL/new/$1/ ; ls -lt | sed -n '2 p' | grep -io '[$1]*_[0123456789]*.zip'")

scp -p4242 olaf-robotics@s-nguyen.net:/home/olaf-robotics/MISC/olaf_robot/experiments/RL/new/$1/$last ./$1/