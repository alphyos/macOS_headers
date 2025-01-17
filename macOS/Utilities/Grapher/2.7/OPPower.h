//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPFactor.h"

@interface OPPower : OPFactor
{
    double mExponent;
}

+ (id)squareOf:(id)arg1;
+ (id)powerOf:(id)arg1 toThe:(double)arg2;
+ (id)powerOf:(id)arg1 to:(id)arg2;
- (id)partialDerivative:(unsigned long long)arg1;
- (id)simplified;
- (struct _NComplex)computeComplexWith:(struct _NComplex)arg1;
- (struct _NComplex)computeComplexWith:(struct _NComplex)arg1 and:(struct _NComplex)arg2;
- (double)computeRealWith:(double)arg1;
- (double)computeRealWith:(double)arg1 and:(double)arg2;
- (id)evaluate;
- (BOOL)staticExponent;
- (void)matrixPower:(double)arg1;
- (id)initWithMantissa:(id)arg1 realExponent:(double)arg2;
- (id)initWithMantissa:(id)arg1 exponent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

