note
	description: "Summary description for {SUBSCRIBER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	SUBSCRIBER[G]

feature

	receive (m: MESSAGE[G])
		require
			m /= Void -- Message must not be Void.
		deferred
		end

end
