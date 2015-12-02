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
--center Yeah!
---
--center * Exists in different variants, f.ex BSD and SYS V, but we have no time to talk about it.
---
--center UNIX is built up like this: imagine an egg. The yolk is the kernel. The white and the shell surround it. To get to the yolk...
---

--boldon
--center You gonna deal with the shell!
--boldoff
---

--center BUT: we are not gonna break the shell. Confused?
---

--center The kernel is the component in contact with all the hardware devices and is capable to control them all.
---

--center The shell instead can send commands to the kernel, by translating the human (you) input so that the kernel can comply to the requests..
--center ..and answer back to the shell that will traslate the message to you.
---

--center In fact a big part of a UNIX operating system consists in ordered lists or recepies ( aka "scripts" ) made of shell commandline operations.
--center Over 60% of all the infernet servers are running UNIX / LINUX.
---


--boldon
--center But we are still not impressed.
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
--center Later he changed his mind and decided to rename it FREAX. But someone thought it wasn't a good idea and ignored him. ( Thank you ).
--center He must have been bored when he wrote Linux, in fact it was started as a freetime project and he did not expect to have success.
--center He was offered to join efforts with Steve Jobs and write the Apple operating system. He refused because of differences in views about the kernel.
--center Later versions of Mac OS have been based on UNIX. See the irony?
---


--boldon
--center No comment.
--boldoff
---


--center He later wrote git.
---

--center Next time you feel like you are just a fool, think about Linus Torvalds.
--center Then rethink, because Linus Torvalds is probably better than you.
---
--center ...at Linux.
--center BTW, the pinguin logo was designed by Larry Ewing.
--footer sub@krutt.org

--newpage
--heading SHELL

--center It's so much more powerful than a graphical interface, BECAUSE it has much lower requirements, an aspect that makes it much more flexible.
--center Shells can run using an insane amount of different possible physical links to a computer, the internet is only one.
---

--center It's also a brand of fuel.
---

--center It's safe: whenever you try to access one online, you are asked a username and password. It implements the state of the art of IT security.
---

--center The websites of the norwegian police run on Windows instead.
---


--center It's just another thing in Linux / Unix with a dull name. But you can call it "terminal", "console" or "command line" too.
---
--center And it's hardly gonna be any better.
---


--center There are several types of shell, the most popular of them all is called BASH, but ZSH is also majestic. All have slightly different characteristics, but you can use any of them more or less in the same way.
--center Almost every program in Linux runs in a shell.
--center If you master the shell, you have secured yourself a workplace, maybe a career, and you could also possibly make a lot of money.
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

* When talking about locations in the filetree, we refer to them as "paths".
---

* Whenever we gain access to a shell, we end up in the home directory of the user we logged in as. For example /home/justinbieber. This path
lays two levels under slash, both in UNIX and in the musical world.
---

* "Root" is a "special" user, so special that has its home directory only one level under slash, "/root".
---

* I don't dare to make another joke about Slash now. You got the picture anyway.
---

--center About me?

--footer sub@krutt.org

--newpage
--heading THE FIRST COMMANDS
---

--boldon
--center The commands might look difficult to remember at first, but note that many of them are in fact acronymes.
---
--center Nerds LOVE to use acronymes, both to "type less" and remember things.
---
--center Sometimes they overdo, and they sound like maniacs.
--center That definitely doesn't help them getting laid in some case.
---
--center ...never mind...
--boldoff
---

* "cwd", short for  "current working directory", tells you where you are in the tree.
When you log in, you end up in your home directory, so we start from there.
---

* "ls", or "list", shows what is the content of the directory you are in.
---

* "cd", or "change directory", is used to move from a directory to another.
---

* to the side of the files contained in every directory, you will always find ".." and ".", the first one is like a "stair" to the upper level, that you can use with "cd".
---

...while the second, "." means "here".
---


--center Don't sweat and buffer, just take it as it is. We get there.



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
* The command itself, that is written first. Can be referred to as "$0".
---
* The first argument of the command, often an option. Can be referred to as "$1".
---
* The second argument of the command, could be a file we are running the command on, in order to do some kind of processing. Can be referred to as "$2".
---
* The third argument? "$3".
---


--center command arg1 arg2 [..]
---


--center The result of the action of running a command, can be true or false. Can be referred to as "$?", or "exit code".
---

* An exit code of "0" is normally "true", while "1" being "false".
---

* We can request the exit code of a command by using the command "echo" followed by "$?".
---

* There are exceptions here. Many. We are being superficial now. But we make it simple at the beginning, because not everyone is born Linus Torvalds.
---

--center Someone might make a stupid joke now.
--footer sub@krutt.org

--newpage
--heading MORE COMMAND FOO
--heading ("foo" means both "knowledge" and "shit" in the nerd world)
---

--center Again, don't use this stuff with the intent to impress anyone.
---


* "man", or "manual"

gives you a complete and exhaustive manual page about a command, showing you, between other things, what are the required values ( if any ) one should
type in after the command itself: some commands require an option, some commands are meant to be ran on a file to process it. It varies a lot. The argument that "man" requires is the command you want to know about. Example "man ls".
---

* "ls" or "list"

can accept some option, like for example -la (options are often preceeded by "-" or "dash") that tunes and specify the precision we expect when we send the request to the shell. "-la", "list all", tells the shell that we want more details than just the names of the files contained in the path. For example "ls -la ." or "here".
Or: "ls -la /home/justinbieber"
---

* So, again: $0 = "ls", $1 = "-la", "$2" = "/home/justinbieber".
No such file or directory ( the shell is such a perfect world sometimes ).
"echo $?" 1. False, we have no home for justinbieber.
---



--boldon
--center Smelling the ice cream yet?
---
--center Does ice cream have a smell?
--boldoff


--footer sub@krutt.org
--newpage

--heading CONTENT (of a file)
---

* Very many files in Linux / UNIX contain text. Not always easy to read, sometimes totally unreadable, but still text, and we can access and manipulate all of this text in many ways. It's AWESOME, considering the type of world we are living in. I will spend a few more words about it: this is one of the reason why it's called "open source", and also free to read, learn, modify and redistribute. This means a LOT for a lot of people.
---

* "cat", or "concatenate", a bit difficult to guess at first, "connects" the input to the output. You git it a file as an input, it spits out the content. $1 is the file.
---

* "less" and "more", "more or less like cat", they have better controls to steer the output of the content, search possibilities and so on. $1 is the file.
---

* We are not covering the editors here, mostly because we don't want to exactly what the terrorist want us to do: polarize concentrate on antagonist positions, radicalize our views and focus on war and pedobear.
---




--footer sub@krutt.org
--newpage

--heading COPY, MOVE, RENAME, REMOVE
---

* "cp", or "copy". Takes the argument (being a file or a directory), and copies it over to a path.
---

* "mv", or "move". Same as copy, but the original file will disappear from it's original path, and could get a new name in the destination. Move can in fact be used as a rename command, and is also the most used command to achieve that.
---

* "rm", or "remove". It deletes a file, or, with the -r option, all the files recursively. Use with caution, there is no trashbin.
---

--footer sub@krutt.org
--newpage

--heading OWNERSHIP OF FILES / DIRECTORIES


--center So far so good, but until now we have been considering just one user. You. You run commands after you have been autenthicated at login and authorized to execute certain binaries and scripts, and every process you will spawn, will be ran as you. The same applies for all users having an account on the machine, including those that are not phisical persons, but simply software components of the operating system. This might sound a bit funky, but it's a quite effective way to separate the areas of influence of the different users and enforce a good level of security. Users are also organized in groups so that is easier to classify those areas. In fact every user can access the files that are either available to her or to her group. To increase granularity we can also specify if the ownership is partial ( the user can read the file ), if it is possible to also modify/rename/remove the file, and if the file can be executed ( if that is a possible scenario, ie, the file is a script or a program ).
---


--center If you understood this, consider that this applies also to directories.

--footer sub@krutt.org
--newpage

--heading PERMISSIONS



