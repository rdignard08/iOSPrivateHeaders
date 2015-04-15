
@interface BSSpringAnimationSettings : BSAnimationSettings {

    double _mass;
    double _stiffness;
    double _damping;
    double _epsilon;
    BOOL _hasCalculatedDuration;
}
 + (BOOL) supportsSecureCoding;
 + (id) settingsWithMass:(double)astiffness:(double)bdamping:(double)c;
 + (id) settingsWithMass:(double)astiffness:(double)bdamping:(double)cepsilon:(double)d;
 + (id) settingsWithMass:(double)astiffness:(double)bdamping:(double)ctimingFunction:(id)d;
 + (id) settingsWithMass:(double)astiffness:(double)bdamping:(double)cepsilon:(double)dtimingFunction:(id)e;
 + (id) settingsWithMass:(double)astiffness:(double)bdamping:(double)cepsilon:(double)ddelay:(double)etimingFunction:(id)f;

 - (double) duration;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (void) encodeWithXPCDictionary:(id)a ;
 - (id) initWithXPCDictionary:(id)a ;
 - (id) _initWithDuration:(double)a delay:(double)b frameInterval:(double)c timingFunction:(id)d ;
 - (BOOL) isSpringAnimation;
 - (void) _setDuration:(double)a ;
 - (void) _setTimingFunction:(id)a ;
 - (void) _setEpsilon:(double)a ;
 - (id) _initWithMass:(double)a stiffness:(double)b damping:(double)c epsilon:(double)d delay:(double)e frameInterval:(double)f timingFunction:(id)g ;
 - (double) stiffness;
 - (double) epsilon;
 - (BOOL) _hasCalculatedDuration;
 - (void) _setMass:(double)a ;
 - (void) _setStiffness:(double)a ;
 - (void) _setDamping:(double)a ;
 - (double) mass;
 - (double) damping;


@end
