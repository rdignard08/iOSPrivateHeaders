
@interface RGResponseObject : NSObject {

    @"NSArray" _responseBody;
    @"NSError" _error;
    @"NSManagedObjectContext" _context;
}
@property (nonatomic, retain, readwrite) NSArray* responseBody;
@property (nonatomic, retain, readwrite) NSError* error;
@property (nonatomic, retain, readwrite) NSManagedObjectContext* context;

 - (id) responseBody;
 - (void) setResponseBody:(id)a;
 - (void) .cxx_destruct;
 - (id) error;
 - (void) setError:(id)a;
 - (void) setContext:(id)a;
 - (id) context;


@end
