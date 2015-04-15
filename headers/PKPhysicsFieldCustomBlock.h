
@interface PKPhysicsFieldCustomBlock : PKPhysicsField {

    @? _batchBlock;
    @? _block;
}
 + (id) fieldWithCustomBlock:(@?)a;
 + (id) fieldWithCustomBatchBlock:(@?)a;

 - (void) .cxx_destruct;
 - (id) initWithCustomBlock:(@?)a ;
 - (id) initWithCustomBatchBlock:(@?)a ;


@end
