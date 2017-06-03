case "$1" in
  'off')
    color="000"
  ;;
  'white')
    color="111"
  ;;
  'green')
    color="100"
  ;;
  'red')
    color="010"
  ;;
  'blue')
    color="001"
  ;;
  'yellow')
    color="110"
  ;;
  'purple')
    color="011"
  ;;
  'aqua')
    color="101"
  ;;
esac

sudo su -c "echo $color > /sys/devices/platform/clevo_wmi/kbled/left"
sudo su -c "echo $color > /sys/devices/platform/clevo_wmi/kbled/middle"
sudo su -c "echo $color > /sys/devices/platform/clevo_wmi/kbled/right"
