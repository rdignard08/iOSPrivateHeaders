
@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver {

    NSDictionary* _defaultValues;
}

 - (void) dealloc;
 - (id) decodeObjectForKey:(id)a ;
 - (id) initForReadingWithData:(id)a defaultValues:(id)b ;


@end
