
@interface NSFilesystemItemRemoveOperation : NSOperation {

    id _delegate;
    NSString* _removePath;
    NSError* _error;
    ^v _state;
    BOOL _filterUnderbars;
}
 + (id) filesystemItemRemoveOperationWithPath:(id)a;
 + (id) _errorWithErrno:(int)aatPath:(id)b;

 - (id) initWithPath:(id)a;
 - (void) _setError:(id)a;
 - (void) main;
 - (BOOL) _filtersUnderbars;
 - (void) _setFilterUnderbars:(BOOL)a;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) error;
 - (id) delegate;


@end
