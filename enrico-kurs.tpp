--author Enrico Razzetti
--title Shell Disaster Course
--date today
--heading Teknisk Aperitiff @ Hackeriet

--center "This course will probably turn any person into a professional disaster maker, just capable of perfectly faking it
--center until the very moment pressing the enter key will reveal the truth and everything will fail miserably.
--center I take no responsibility for the consequences.
--center In fact i never broke anything, i have never faked it,
--center and if you ask me
--center i probably can't remember anything about it. But i am pretty sure i did not press that enter key.
--center What was the question? Let's have another drink."

--center The Author, autumn 2015
--footer sub@krutt.org

--newpage
--heading DISCLAIMER
---

--boldon
--center I have a weird sense of humour.
--boldoff
---


--center Jokes build constantly up in my mind, often devoloping randomly around words and barely logical connections, on and on, without me knowing exactly where this will take me.
--center It's quite random, and it often works.
--center I have observed though, that this can provoke disproportioned negative emotional reactions in some individuals: frustration, anger, or even Justin Bieber.
---



--boldon
--center If this happens to you, i deeply apologize in advance for that.
--boldoff
---



--center I am aware of this problem and i try to control myself, but the temptation of throwing a joke, no matter how bad or weird, or obnoxious, is often too strong.
--center I am basically a fool. I use any acceptable mean to have a laugh.
--center Language is a weird ( and powerful ) tool, and using it creatively can enhance the pleasure of a communication immensely.
---


--boldon
--center ...or not...
--boldoff
---



--center However, if you get offended, i really really hope you can forgive me.
--center I actually do this innocently, hoping to make you laugh, i absolutely don't mean to offend anyone.
---


--boldon
--center Sorry.
--boldoff
---







...and now go fuck yourself.
--footer sub@krutt.org

--newpage
--heading UNIX / LINUX

--center UNIX is OLD

--center * It has been around since the hippies started to walk the land.
--center * I wasn't there then (really?)
--center * Exists in different variants, f.ex BSD and SYS V

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
