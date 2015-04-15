
@interface CAPackage : NSObject {

    ^{_CAPackageData=@@@BB@@} _data;
}
@property (atomic, assign, readonly) CALayer* rootLayer;
@property (atomic, assign, readonly, isGeometryFlipped) NSNumber* geometryFlipped;
 + (id) packageWithData:(id)atype:(id)boptions:(id)cerror:(^@)d;
 + (id) packageWithContentsOfURL:(id)atype:(id)boptions:(id)cerror:(^@)d;

 - (id) unarchiver:(id)adidDecodeObject:(id)b;
 - (Class) unarchiver:(id)acannotDecodeObjectOfClassName:(id)boriginalClasses:(id)c;
 - (void) dealloc;
 - (id) publishedObjectWithName:(id)a;
 - (void) foreachLayer:(@?)a;
 - (BOOL) isGeometryFlipped;
 - (id) _initWithContentsOfURL:(id)atype:(id)boptions:(id)cerror:(^@)d;
 - (id) _initWithData:(id)atype:(id)boptions:(id)cerror:(^@)d;
 - (void) _readFromCAMLURL:(id)atype:(id)boptions:(id)cerror:(^@)d;
 - (void) _readFromArchiveData:(id)aoptions:(id)berror:(^@)c;
 - (void) _readFromCAMLData:(id)atype:(id)boptions:(id)cerror:(^@)d;
 - (id) substitutedClasses;
 - (void) _addClassSubstitutions:(id)a;
 - (id) rootLayer;
 - (id) publishedObjectNames;
 - (Class) CAMLParser:(id)adidFailToFindClassWithName:(id)b;
 - (id) CAMLParser:(id)aresourceForURL:(id)b;
 - (void) CAMLParser:(id)adidLoadResource:(id)bfromURL:(id)c;


@end
