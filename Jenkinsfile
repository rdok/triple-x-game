pipeline {
    agent { label 'linux' }
    triggers { cron('H H(18-19) * * *') }
    options { buildDiscarder( logRotator( numToKeepStr: '5' ) ) }
    stages {
        stage('Compile') {
            steps {
                ansiColor('xterm') {
                    sh '''#!/bin/bash
                        ./worbench.sh g++ TripleX.cpp -o TripleX.out
                    '''
                }
            }
        }
        stage('Run & Test') {
            steps {
                ansiColor('xterm') {
                    sh '''#!/bin/bash
                        ./worbench.sh ./TripleX.out | \
                            grep -q 'Entering TripleX' \
                            || error "Failed asserting "
                    '''
                }
            }
        }
    }
    post {
        failure {
            slackSend color: '#FF0000',
            message: "@here Failed: <${env.BUILD_URL}console | ${env.JOB_NAME}#${env.BUILD_NUMBER}>"
        }
        fixed {
            slackSend color: 'good',
            message: "@here Fixed: <${env.BUILD_URL}console | ${env.JOB_NAME}#${env.BUILD_NUMBER}>"
        }
    }
}