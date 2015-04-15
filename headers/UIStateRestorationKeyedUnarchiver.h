
@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver {

    NSDictionary* _defaultValues;
}

 - (void) dealloc;
 - (id) decodeObjectForKey:(id)a;
 - (id) initForReadingWithData:(id)adefaultValues:(id)b;


@end
