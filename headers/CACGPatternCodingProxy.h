
@interface CACGPatternCodingProxy : CACodingProxy {

    ^{CGPattern=} _pattern;
}

 - (void) dealloc;
 - (id) initWithObject:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) decodedObject;


@end
