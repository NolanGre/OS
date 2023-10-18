VBoxManage createvm --name "Ubuntu by cons" \
-ostype Ubuntu14_LTS --register
 VBoxManage storagectl "Ubuntu by cons" --name "myIDE" \
--add ide --controller PIIX4
VBoxManage storageattach "Ubuntu by cons" --storagectl "myIDE" --port 0 --device 0 --type dvddrive --medium ubuntu-14.04.6-server-i386.iso
 VBoxManage storagectl "Ubuntu by cons" --name "mySATA" \
--add sata --controller IntelAHCI
 VBoxManage createmedium --filename disk01.vdi --size 8880
 VBoxManage storageattach "Ubuntu by cons" \
--storagectl "mySATA" --port 0 --device 0 --type hdd \
--medium disk01.vdi
 VBoxManage startvm "Ubuntu by cons"
 VBoxManage controlvm "Ubuntu by cons" savestate
VBoxManage startvm "Ubuntu by cons"
VBoxManage controlvm "Ubuntu by cons" poweroff
VBoxManage unregistervm "Ubuntu by cons" --delete-all
