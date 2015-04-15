
@interface NSConcretePortCoder : NSPortCoder {

    NSSet* whitelist;
}

 - (void) _setWhitelist:(id)a;
 - (BOOL) _classAllowed:(Class)a;
 - (void) dealloc;


@end
