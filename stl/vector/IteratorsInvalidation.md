Iterator Invalidations:
this concept come under STL
if a iteratot point to an conatainer and in future that container change 
so the now container have new merory location or address but iterator still point to old location this is called iterator invalidation.


realloction happen with vector 
when we try to add more element in vector but vector have less capacity 
so implicitly it will allocat more memory with new location 
this is called reallocation 
due to this reasson iterator invaliation happen 
if pointer refrence and iterartor point to conatainer but after some time conatainer address change but that 3 pointer refrence and iterator point to old address.