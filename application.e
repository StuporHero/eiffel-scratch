note
	description: "scratch application root class"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS_32

create
	make

feature {NONE}

	make
			-- Initialization
		local
			queue: MESSAGE_QUEUE[STRING]
			subscriber: PRINT_SUBSCRIBER
			message: MESSAGE[STRING]
		do
			create queue.make
			create subscriber
			create message.make ("Hello Eiffel World!%N")
			queue.subscribe (subscriber)
			queue.publish (message)
		end

end
