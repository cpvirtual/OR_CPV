
Comment ( *** Advanced coupler for CP5600 locomotives *** )
Coupling (
         FrontCouplerAnim ( CouplerA.s 0.0 0.9 -0.35 )
         RearCouplerAnim ( CouplerB.s 0.0 0.9 -0.35 )
         Spring (
                         ORTSTensionStiffness ( 50000lbf 511000lbf )
                         ORTSTensionR0 ( 0in 1.0in )
                         ORTSTensionSlack ( 2.75in 0.4in )

                         ORTSCompressionStiffness ( 50000lbf 511000lbf )
                         ORTSCompressionR0 ( 0in 1.0in )
                         ORTSCompressionlack ( 2.75in 0.4in )

                         ORTSBreak ( 1.8e6N 511000lbf )
         )
         CouplingHasRigidConnection ( 0 )
)
