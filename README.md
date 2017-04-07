# init_remover
Module, which "kill" init process. 
Really, this module replace task_struct init process` to new, empty task_struct. When you load this module, everything processes
have no parent. Screen is frozen, but every files, programs, etc. in system are safe. You can repair everything rebooting system.
