case "$1" in
  'off')
    sudo su -c "echo 1 > /sys/devices/platform/clevo_wmi/kbled/pattern_off"
  ;;
  'on')
    sudo su -c "echo 301 > /sys/devices/platform/clevo_wmi/kbled/random_fade"
  ;;
esac
