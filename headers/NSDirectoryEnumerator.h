
@interface NSDirectoryEnumerator : NSEnumerator {

}

 - (id) fileAttributes;
 - (id) directoryAttributes;
 - (void) skipDescendents;
 - (void) skipDescendants;
 - (id) nextObject;
 - (unsigned long long) level;


@end
