note
	description: "Summary description for {MESSAGE_QUEUE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MESSAGE_QUEUE[G]

create
	make

feature

	subscribe (s: SUBSCRIBER[G])
		require
			s /= Void -- The subscriber cannot be Void.
		do
			subscribers.extend (s)
		ensure
			subscribers.has (s) -- The subscriber is now included in the set.
		end

	unsubscribe (s: SUBSCRIBER[G])
		require
			s /= Void -- The subscriber cannot be Void.
		do
			subscribers.prune (s)
		ensure
			not subscribers.has (s) -- The subscriber is no longer included in the set.
		end

	publish (m: MESSAGE[G])
		require
			m /= Void -- The message cannot be Void.
		do
			across subscribers as s loop
				s.item.receive (m)
			end
		end

feature {NONE}

	subscribers: ARRAYED_SET[SUBSCRIBER[G]]

	make
			-- Initialize the arrayed_set of subscribers.
		do
			create subscribers.make (0)
		end

invariant
	subscribers /= Void

end -- MESSAGE_QUEUE
