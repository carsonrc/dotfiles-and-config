date_formatted=$(date "+%a %Y-%m-%d %l:%M:%S %p")

battery_info=$(acpi | grep -E "Battery 0:")

cpu_info=$(top -b -d1 -n1 | grep -i "Cpu(s)" | head -c21 | cut -d ' ' -f3 | cut -d '%' -f1)

ram_info=$(free -h | grep "Mem:")

volume_percentage=$(amixer get Master | grep "Front Left:")


echo  "||" $date_formatted "|| CPU use:" $cpu_info "|| RAM used/free"  ${ram_info:21:(-35)} "|| Vol:" ${volume_percentage:28}  "||"  ${battery_info:10} "||" 
