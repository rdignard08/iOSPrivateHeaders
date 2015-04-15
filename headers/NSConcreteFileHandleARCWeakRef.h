
@interface NSConcreteFileHandleARCWeakRef : NSObject {

    id ref;
}

 - (id) loadWeak;
 - (void) storeWeak:(id)a ;
 - (void) dealloc;


@end
