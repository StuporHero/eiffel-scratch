note
	description: "Summary description for {PRINT_SUBSCRIBER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PRINT_SUBSCRIBER

inherit SUBSCRIBER[STRING]

feature

	receive (m: MESSAGE[STRING])
		do
			print (m.payload)
		end

end
