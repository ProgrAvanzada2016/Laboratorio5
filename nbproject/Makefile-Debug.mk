#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/conceptos/Estudiante.o \
	${OBJECTDIR}/conceptos/aceptaCargo.o \
	${OBJECTDIR}/conceptos/aprobacion.o \
	${OBJECTDIR}/conceptos/asignatura.o \
	${OBJECTDIR}/conceptos/carrera.o \
	${OBJECTDIR}/conceptos/date.o \
	${OBJECTDIR}/conceptos/empresa.o \
	${OBJECTDIR}/conceptos/encargado.o \
	${OBJECTDIR}/conceptos/inscripcion.o \
	${OBJECTDIR}/conceptos/oferta.o \
	${OBJECTDIR}/conceptos/persona.o \
	${OBJECTDIR}/conceptos/seccion.o \
	${OBJECTDIR}/conceptos/sucursal.o \
	${OBJECTDIR}/controladores/ControladorEstudiante.o \
	${OBJECTDIR}/controladores/ControladorOferta.o \
	${OBJECTDIR}/datatypes/DtEstudiante.o \
	${OBJECTDIR}/datatypes/dtAcepto.o \
	${OBJECTDIR}/datatypes/dtAsignatura.o \
	${OBJECTDIR}/datatypes/dtCarrera.o \
	${OBJECTDIR}/datatypes/dtEmpresa.o \
	${OBJECTDIR}/datatypes/dtEstudianteInfo.o \
	${OBJECTDIR}/datatypes/dtLlamado.o \
	${OBJECTDIR}/datatypes/dtOferta.o \
	${OBJECTDIR}/datatypes/dtRango.o \
	${OBJECTDIR}/datatypes/dtSeccion.o \
	${OBJECTDIR}/datatypes/dtSucursal.o \
	${OBJECTDIR}/fabricas/fabrica.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/manejadores/ManejadorAsignatura.o \
	${OBJECTDIR}/manejadores/ManejadorCarrera.o \
	${OBJECTDIR}/manejadores/ManejadorEmpresa.o \
	${OBJECTDIR}/manejadores/ManejadorEstudiante.o \
	${OBJECTDIR}/manejadores/ManejadorOferta.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/laboratorio5.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/laboratorio5.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/laboratorio5 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/conceptos/Estudiante.o: conceptos/Estudiante.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/Estudiante.o conceptos/Estudiante.cpp

${OBJECTDIR}/conceptos/aceptaCargo.o: conceptos/aceptaCargo.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/aceptaCargo.o conceptos/aceptaCargo.cpp

${OBJECTDIR}/conceptos/aprobacion.o: conceptos/aprobacion.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/aprobacion.o conceptos/aprobacion.cpp

${OBJECTDIR}/conceptos/asignatura.o: conceptos/asignatura.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/asignatura.o conceptos/asignatura.cpp

${OBJECTDIR}/conceptos/carrera.o: conceptos/carrera.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/carrera.o conceptos/carrera.cpp

${OBJECTDIR}/conceptos/date.o: conceptos/date.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/date.o conceptos/date.cpp

${OBJECTDIR}/conceptos/empresa.o: conceptos/empresa.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/empresa.o conceptos/empresa.cpp

${OBJECTDIR}/conceptos/encargado.o: conceptos/encargado.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/encargado.o conceptos/encargado.cpp

${OBJECTDIR}/conceptos/inscripcion.o: conceptos/inscripcion.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/inscripcion.o conceptos/inscripcion.cpp

${OBJECTDIR}/conceptos/oferta.o: conceptos/oferta.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/oferta.o conceptos/oferta.cpp

${OBJECTDIR}/conceptos/persona.o: conceptos/persona.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/persona.o conceptos/persona.cpp

${OBJECTDIR}/conceptos/seccion.o: conceptos/seccion.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/seccion.o conceptos/seccion.cpp

${OBJECTDIR}/conceptos/sucursal.o: conceptos/sucursal.cpp 
	${MKDIR} -p ${OBJECTDIR}/conceptos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/conceptos/sucursal.o conceptos/sucursal.cpp

${OBJECTDIR}/controladores/ControladorEstudiante.o: controladores/ControladorEstudiante.cpp 
	${MKDIR} -p ${OBJECTDIR}/controladores
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/controladores/ControladorEstudiante.o controladores/ControladorEstudiante.cpp

${OBJECTDIR}/controladores/ControladorOferta.o: controladores/ControladorOferta.cpp 
	${MKDIR} -p ${OBJECTDIR}/controladores
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/controladores/ControladorOferta.o controladores/ControladorOferta.cpp

${OBJECTDIR}/datatypes/DtEstudiante.o: datatypes/DtEstudiante.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/DtEstudiante.o datatypes/DtEstudiante.cpp

${OBJECTDIR}/datatypes/dtAcepto.o: datatypes/dtAcepto.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/dtAcepto.o datatypes/dtAcepto.cpp

${OBJECTDIR}/datatypes/dtAsignatura.o: datatypes/dtAsignatura.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/dtAsignatura.o datatypes/dtAsignatura.cpp

${OBJECTDIR}/datatypes/dtCarrera.o: datatypes/dtCarrera.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/dtCarrera.o datatypes/dtCarrera.cpp

${OBJECTDIR}/datatypes/dtEmpresa.o: datatypes/dtEmpresa.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/dtEmpresa.o datatypes/dtEmpresa.cpp

${OBJECTDIR}/datatypes/dtEstudianteInfo.o: datatypes/dtEstudianteInfo.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/dtEstudianteInfo.o datatypes/dtEstudianteInfo.cpp

${OBJECTDIR}/datatypes/dtLlamado.o: datatypes/dtLlamado.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/dtLlamado.o datatypes/dtLlamado.cpp

${OBJECTDIR}/datatypes/dtOferta.o: datatypes/dtOferta.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/dtOferta.o datatypes/dtOferta.cpp

${OBJECTDIR}/datatypes/dtRango.o: datatypes/dtRango.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/dtRango.o datatypes/dtRango.cpp

${OBJECTDIR}/datatypes/dtSeccion.o: datatypes/dtSeccion.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/dtSeccion.o datatypes/dtSeccion.cpp

${OBJECTDIR}/datatypes/dtSucursal.o: datatypes/dtSucursal.cpp 
	${MKDIR} -p ${OBJECTDIR}/datatypes
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/datatypes/dtSucursal.o datatypes/dtSucursal.cpp

${OBJECTDIR}/fabricas/fabrica.o: fabricas/fabrica.cpp 
	${MKDIR} -p ${OBJECTDIR}/fabricas
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/fabricas/fabrica.o fabricas/fabrica.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/manejadores/ManejadorAsignatura.o: manejadores/ManejadorAsignatura.cpp 
	${MKDIR} -p ${OBJECTDIR}/manejadores
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/manejadores/ManejadorAsignatura.o manejadores/ManejadorAsignatura.cpp

${OBJECTDIR}/manejadores/ManejadorCarrera.o: manejadores/ManejadorCarrera.cpp 
	${MKDIR} -p ${OBJECTDIR}/manejadores
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/manejadores/ManejadorCarrera.o manejadores/ManejadorCarrera.cpp

${OBJECTDIR}/manejadores/ManejadorEmpresa.o: manejadores/ManejadorEmpresa.cpp 
	${MKDIR} -p ${OBJECTDIR}/manejadores
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/manejadores/ManejadorEmpresa.o manejadores/ManejadorEmpresa.cpp

${OBJECTDIR}/manejadores/ManejadorEstudiante.o: manejadores/ManejadorEstudiante.cpp 
	${MKDIR} -p ${OBJECTDIR}/manejadores
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/manejadores/ManejadorEstudiante.o manejadores/ManejadorEstudiante.cpp

${OBJECTDIR}/manejadores/ManejadorOferta.o: manejadores/ManejadorOferta.cpp 
	${MKDIR} -p ${OBJECTDIR}/manejadores
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/manejadores/ManejadorOferta.o manejadores/ManejadorOferta.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/laboratorio5.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
