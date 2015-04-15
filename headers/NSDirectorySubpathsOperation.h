
@interface NSDirectorySubpathsOperation : NSDirectoryTraversalOperation {

    NSMutableArray _subpaths;
}
 + (id) directorySubpathsOperationAtPath:(id)a;
 + (id) _errorWithErrno:(int)aatPath:(id)b;

 - (id) subpaths;
 - (void) handlePathname:(id)a;
 - (void) dealloc;


@end
