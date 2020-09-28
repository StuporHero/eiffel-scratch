note
	description: "Summary description for {MESSAGE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MESSAGE[G]

create
	make

feature

	payload: G

feature {NONE}

	make (initial: G)
			-- Initialize the message with a payload.
		require
			initial /= Void
		do
			payload := initial
		ensure
			payload = initial
		end

invariant
	payload /= Void

end
