--author Enrico Razzetti
--title Shell Disaster Course
--date today
--heading Teknisk Aperitiff @ Hackeriet





--center An introduction to BASH for beginners









--footer sub@krutt.org

--newpage
--heading WARNING
---




--boldon
--center I have a weird sense of humour. Please forgive me.
--boldoff
---










--footer sub@krutt.org

--newpage
--heading UNIX / LINUX

--center UNIX is OLD

--center * It has been around since the elephant bell trousers' times.
--center * Big moustaches, Ford Mustang, Clark shoes, Isaac Hayes and many other superfly things. Like the shell.
---
--center Yeah right.
---
--center * Exists in different variants, f.ex BSD and SYS V
---
--center UNIX is built up like this: imagine an egg. The yolk is the kernel. The white and the shell surround it. To get to the yolk...
---

--boldon
--center ..never mind..
--boldoff

---
--center The kernel is in contact with all the hardware components and is capable to control them.
--center The shell is capable to send commands to the kernel, by translating the human input so that the kernel can comply to the requests.
--center In fact most parts of a UNIX operating system consist in lists ( aka "scripts" ) of shell commandline operations.
--center Over 60% of all the infernet servers are running UNIX / LINUX
---


--boldon
--center I am still not impressed.
--boldoff

--footer sub@krutt.org

--newpage
--heading LINUX

--center Is basically a UNIX flavour, but all the proprietary code has been removed, rewritten and licensed under GPL.
--center Has been written by a finnish guy whose name is Linus. By making this choice, he showed to the world for the first time how boring he can be.
---


--boldon
--center ...It wasn't the last either...
--boldoff

---
--center Later he changed his mind and decided to rename it FREAX. But someone thought it wasn't a good idea and ignored him. ( I wonder why.. )
--center He must have been bored when he wrote Linux, in fact it was started as a freetime project and he did not expect to have success.
--center He was offered to join efforts with Steve Jobs and write the Apple operating system. He refused because of differences in views about the kernel.
--center Later versions of Mac OS have been based on UNIX. See the irony?
---


--boldon
--center No comment.
--boldoff
---


--center He later wrote git.
--center Next time you feel like you are just a fool, think about Linux Torvalds.
--center BTW, the pinguin was designed by Larry Ewing. He's cool.
--footer sub@krutt.org

--newpage
--heading SHELL

--center It's so much more powerful than a graphical interface, has much lower requirements, and is much more flexible.
--center It's also a brand of fuel.
--center It's safe: whenever you try to access one online, you are asked a username and password. It implements the state of the art of IT security.
---

--center The websites of the norwegian police run on Windows instead.
---


--center It's just another thing in Linux / Unix with a dull name. But you can call it "terminal", "console" or "command line" too. 
---
--center And it's hardly gonna be any better.
---


--center There are several types of shell, the most popular of them all is called BASH, but ZSH is also very very cool. All have slightly different characteristics, but you can use any of them.
--center Almost every program in Linux runs in a shell.
--center If you master the shell, you have secured yourself a workplace, and you could possibly make a lot of money.
---


--boldon
--center Unless you are Linus Torvalds.
--boldoff
--footer sub@krutt.org
--newpage

--boldon
--center THE FILE TREE
--boldoff

---
* It's a gerarchical structure that organizes files and directories.
---

* At the top level of the tree is a main directory that contains all the others, marking the "point of start" of the tree, or the "root" of the tree.
---

* "Root" is also the name of the administrator user present in all UNIX installations, but the "root" of the tree is also called "slash", as it is in fact a "/" symbol.
---

* Slash is also the name of a famous british / american musician and producer living in Los Angeles, but he never contributed to the UNIX codebase.
---

* Under "slash" or "/" you find all the files and directories composing your operating system.
---

* There are directories like "/etc" ( or "slash etc") containing the configuration files, "/bin" ( or "slash bin") containing the "binaries" or "commands,
"/lib" containing the libraries, "/var" containing files that vary in dimension like logs, and "/home" containing the users files, and more.
---

* Whenever we gain access to a shell, we end up in the home directory of the user we logged in as. For example /home/justinbieber. This user directory
lays two levels under slash, both in UNIX and in the musical world.
---

* "Root" is a "special" user, so special that has its home directory only one level under slash, "/root".
---

* I am not making another joke about slash now, but you got the picture.
---

--center About me.

--footer sub@krutt.org

--newpage
--heading THE FIRST COMMANDS




--footer sub@krutt.org
--newpage
--heading ANATOMY OF A COMMAND


---
--boldon
--center For now, just accept acritically this chunk of information.
--boldoff


---
--center Every command can be divided in three parts:

---
* The command itself, that is written first. Can be referred to as "$0". Don't ask, just take it as it is.
---
* The first argument of the command, often an option. Can be referred to as "$1".
---
* The second argument of the command, often it could be a file we are running the command on, in order to do some kind of processing. Can be referred to as "$2".
---
* The third argument? "$3".
---


--center command arg1 arg2 [..]
---


--center The result of the action of running a command, can be true or false. Can be referred to as "$?", or "exit code".
---

* An exit code of "0" is normally "true", while "1" being "false".
---

* There is many other possibilities here, and when i say "can" it's a possibility, but still quite common.
--footer sub@krutt.org

--newpage
--footer sub@krutt.org
