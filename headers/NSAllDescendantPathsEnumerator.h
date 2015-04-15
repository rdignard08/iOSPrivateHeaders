
@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator {

    @"NSString" path;
    @"NSArray" contents;
    unsigned long long idx;
    @"NSString" prepend;
    @"NSAllDescendantPathsEnumerator" under;
    @"NSFileAttributes" directoryAttributes;
    @"NSString" pathToLastReportedItem;
    unsigned long long depth;
    BOOL cross;
    [3c] _padding;
}
 + (id) newWithPath:(id)aprepend:(id)battributes:(id)ccross:(BOOL)ddepth:(unsigned long long)e;

 - (id) fileAttributes;
 - (id) directoryAttributes;
 - (void) skipDescendents;
 - (void) skipDescendants;
 - (id) _under;
 - (id) currentSubdirectoryAttributes;
 - (void) dealloc;
 - (id) nextObject;
 - (unsigned long long) level;


@end
