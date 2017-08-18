import numpy as np
from people import People
p = People()
p.set_dob( np.array([2,3,4]) )
p.get_dob()


# Cannot pass a 2d array yet. Need to flatten it and also pass the dimensions
# this seem to be the way abiet hacky !
X = np.floor( np.random.random( (7,2) )*100 ) / 10.
print X
p.set_image( X.flatten(), X.shape )
