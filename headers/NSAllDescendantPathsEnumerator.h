
@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator {

    @"NSString" path;
    @"NSArray" contents;
    Q idx;
    @"NSString" prepend;
    @"NSAllDescendantPathsEnumerator" under;
    @"NSFileAttributes" directoryAttributes;
    @"NSString" pathToLastReportedItem;
    Q depth;
    BOOL cross;
    [3c] _padding;
}
 + (id) newWithPath:(id)aprepend:(id)battributes:(id)ccross:(BOOL)ddepth:(Q)e;

 - (id) fileAttributes;
 - (id) directoryAttributes;
 - (void) skipDescendents;
 - (void) skipDescendants;
 - (id) _under;
 - (id) currentSubdirectoryAttributes;
 - (void) dealloc;
 - (id) nextObject;
 - (Q) level;


@end
