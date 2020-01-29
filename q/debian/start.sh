qemu-system-x86_64 \
-m 1024 \
-hda hdd \
-cdrom debian.iso \
-net user,hostfwd=::22223-22 \
-vnc :2 \
-boot d
